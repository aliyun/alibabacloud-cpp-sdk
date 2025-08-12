// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyLiveMessageUserInfoResponseBodyFailList.hpp>
#include <alibabacloud/models/ModifyLiveMessageUserInfoResponseBodySuccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    ModifyLiveMessageUserInfoResponseBody() = default ;
    ModifyLiveMessageUserInfoResponseBody(const ModifyLiveMessageUserInfoResponseBody &) = default ;
    ModifyLiveMessageUserInfoResponseBody(ModifyLiveMessageUserInfoResponseBody &&) = default ;
    ModifyLiveMessageUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageUserInfoResponseBody() = default ;
    ModifyLiveMessageUserInfoResponseBody& operator=(const ModifyLiveMessageUserInfoResponseBody &) = default ;
    ModifyLiveMessageUserInfoResponseBody& operator=(ModifyLiveMessageUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failList_ != nullptr
        && this->requestId_ != nullptr && this->successList_ != nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const vector<ModifyLiveMessageUserInfoResponseBodyFailList> & failList() const { DARABONBA_PTR_GET_CONST(failList_, vector<ModifyLiveMessageUserInfoResponseBodyFailList>) };
    inline vector<ModifyLiveMessageUserInfoResponseBodyFailList> failList() { DARABONBA_PTR_GET(failList_, vector<ModifyLiveMessageUserInfoResponseBodyFailList>) };
    inline ModifyLiveMessageUserInfoResponseBody& setFailList(const vector<ModifyLiveMessageUserInfoResponseBodyFailList> & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline ModifyLiveMessageUserInfoResponseBody& setFailList(vector<ModifyLiveMessageUserInfoResponseBodyFailList> && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLiveMessageUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<ModifyLiveMessageUserInfoResponseBodySuccessList> & successList() const { DARABONBA_PTR_GET_CONST(successList_, vector<ModifyLiveMessageUserInfoResponseBodySuccessList>) };
    inline vector<ModifyLiveMessageUserInfoResponseBodySuccessList> successList() { DARABONBA_PTR_GET(successList_, vector<ModifyLiveMessageUserInfoResponseBodySuccessList>) };
    inline ModifyLiveMessageUserInfoResponseBody& setSuccessList(const vector<ModifyLiveMessageUserInfoResponseBodySuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline ModifyLiveMessageUserInfoResponseBody& setSuccessList(vector<ModifyLiveMessageUserInfoResponseBodySuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    // The users whose information failed to be modified.
    std::shared_ptr<vector<ModifyLiveMessageUserInfoResponseBodyFailList>> failList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The users whose information was modified.
    std::shared_ptr<vector<ModifyLiveMessageUserInfoResponseBodySuccessList>> successList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
