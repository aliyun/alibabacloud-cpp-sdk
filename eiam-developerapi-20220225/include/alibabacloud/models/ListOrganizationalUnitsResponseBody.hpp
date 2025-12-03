// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOrganizationalUnitsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListOrganizationalUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListOrganizationalUnitsResponseBody() = default ;
    ListOrganizationalUnitsResponseBody(const ListOrganizationalUnitsResponseBody &) = default ;
    ListOrganizationalUnitsResponseBody(ListOrganizationalUnitsResponseBody &&) = default ;
    ListOrganizationalUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsResponseBody() = default ;
    ListOrganizationalUnitsResponseBody& operator=(const ListOrganizationalUnitsResponseBody &) = default ;
    ListOrganizationalUnitsResponseBody& operator=(ListOrganizationalUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOrganizationalUnitsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOrganizationalUnitsResponseBodyData>) };
    inline vector<ListOrganizationalUnitsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListOrganizationalUnitsResponseBodyData>) };
    inline ListOrganizationalUnitsResponseBody& setData(const vector<ListOrganizationalUnitsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOrganizationalUnitsResponseBody& setData(vector<ListOrganizationalUnitsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOrganizationalUnitsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried organizational units.
    std::shared_ptr<vector<ListOrganizationalUnitsResponseBodyData>> data_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
