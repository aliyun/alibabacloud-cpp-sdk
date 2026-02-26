// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIVISIONPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_DIVISIONPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Division.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class DivisionPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DivisionPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(divisionList, divisionList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DivisionPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(divisionList, divisionList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DivisionPageResult() = default ;
    DivisionPageResult(const DivisionPageResult &) = default ;
    DivisionPageResult(DivisionPageResult &&) = default ;
    DivisionPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DivisionPageResult() = default ;
    DivisionPageResult& operator=(const DivisionPageResult &) = default ;
    DivisionPageResult& operator=(DivisionPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->divisionList_ == nullptr
        && this->requestId_ == nullptr; };
    // divisionList Field Functions 
    bool hasDivisionList() const { return this->divisionList_ != nullptr;};
    void deleteDivisionList() { this->divisionList_ = nullptr;};
    inline const vector<Division> & getDivisionList() const { DARABONBA_PTR_GET_CONST(divisionList_, vector<Division>) };
    inline vector<Division> getDivisionList() { DARABONBA_PTR_GET(divisionList_, vector<Division>) };
    inline DivisionPageResult& setDivisionList(const vector<Division> & divisionList) { DARABONBA_PTR_SET_VALUE(divisionList_, divisionList) };
    inline DivisionPageResult& setDivisionList(vector<Division> && divisionList) { DARABONBA_PTR_SET_RVALUE(divisionList_, divisionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DivisionPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Division>> divisionList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
