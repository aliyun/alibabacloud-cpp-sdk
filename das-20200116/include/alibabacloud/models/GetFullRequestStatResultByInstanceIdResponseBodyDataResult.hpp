// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTSTATRESULTBYINSTANCEIDRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTSTATRESULTBYINSTANCEIDRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFullRequestStatResultByInstanceIdResponseBodyDataResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetFullRequestStatResultByInstanceIdResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestStatResultByInstanceIdResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestStatResultByInstanceIdResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetFullRequestStatResultByInstanceIdResponseBodyDataResult() = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResult(const GetFullRequestStatResultByInstanceIdResponseBodyDataResult &) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResult(GetFullRequestStatResultByInstanceIdResponseBodyDataResult &&) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestStatResultByInstanceIdResponseBodyDataResult() = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResult& operator=(const GetFullRequestStatResultByInstanceIdResponseBodyDataResult &) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResult& operator=(GetFullRequestStatResultByInstanceIdResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->total_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResultList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResultList>) };
    inline vector<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResultList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResultList>) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResult& setList(const vector<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResultList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResult& setList(vector<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResultList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResult& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The full request data.
    std::shared_ptr<vector<Models::GetFullRequestStatResultByInstanceIdResponseBodyDataResultList>> list_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
