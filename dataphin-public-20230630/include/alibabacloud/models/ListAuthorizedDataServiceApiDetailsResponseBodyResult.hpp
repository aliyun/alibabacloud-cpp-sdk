// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedDataServiceApiDetailsResponseBodyResultData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAuthorizedDataServiceApiDetailsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDataServiceApiDetailsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDataServiceApiDetailsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizedDataServiceApiDetailsResponseBodyResult() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResult(const ListAuthorizedDataServiceApiDetailsResponseBodyResult &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResult(ListAuthorizedDataServiceApiDetailsResponseBodyResult &&) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDataServiceApiDetailsResponseBodyResult() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResult& operator=(const ListAuthorizedDataServiceApiDetailsResponseBodyResult &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResult& operator=(ListAuthorizedDataServiceApiDetailsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultData>) };
    inline vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultData>) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResult& setData(const vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResult& setData(vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListAuthorizedDataServiceApiDetailsResponseBodyResultData>> data_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
