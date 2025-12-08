// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFACEDBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFACEDBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFaceDbsResponseBodyDataDbList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class ListFaceDbsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaceDbsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaceDbsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
    };
    ListFaceDbsResponseBodyData() = default ;
    ListFaceDbsResponseBodyData(const ListFaceDbsResponseBodyData &) = default ;
    ListFaceDbsResponseBodyData(ListFaceDbsResponseBodyData &&) = default ;
    ListFaceDbsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaceDbsResponseBodyData() = default ;
    ListFaceDbsResponseBodyData& operator=(const ListFaceDbsResponseBodyData &) = default ;
    ListFaceDbsResponseBodyData& operator=(ListFaceDbsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbList_ == nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline const vector<Models::ListFaceDbsResponseBodyDataDbList> & dbList() const { DARABONBA_PTR_GET_CONST(dbList_, vector<Models::ListFaceDbsResponseBodyDataDbList>) };
    inline vector<Models::ListFaceDbsResponseBodyDataDbList> dbList() { DARABONBA_PTR_GET(dbList_, vector<Models::ListFaceDbsResponseBodyDataDbList>) };
    inline ListFaceDbsResponseBodyData& setDbList(const vector<Models::ListFaceDbsResponseBodyDataDbList> & dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };
    inline ListFaceDbsResponseBodyData& setDbList(vector<Models::ListFaceDbsResponseBodyDataDbList> && dbList) { DARABONBA_PTR_SET_RVALUE(dbList_, dbList) };


  protected:
    std::shared_ptr<vector<Models::ListFaceDbsResponseBodyDataDbList>> dbList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
