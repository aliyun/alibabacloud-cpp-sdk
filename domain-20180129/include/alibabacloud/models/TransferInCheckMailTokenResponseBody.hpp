// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class TransferInCheckMailTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferInCheckMailTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, TransferInCheckMailTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    TransferInCheckMailTokenResponseBody() = default ;
    TransferInCheckMailTokenResponseBody(const TransferInCheckMailTokenResponseBody &) = default ;
    TransferInCheckMailTokenResponseBody(TransferInCheckMailTokenResponseBody &&) = default ;
    TransferInCheckMailTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferInCheckMailTokenResponseBody() = default ;
    TransferInCheckMailTokenResponseBody& operator=(const TransferInCheckMailTokenResponseBody &) = default ;
    TransferInCheckMailTokenResponseBody& operator=(TransferInCheckMailTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessList& obj) { 
        DARABONBA_PTR_TO_JSON(SuccessDomain, successDomain_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessList& obj) { 
        DARABONBA_PTR_FROM_JSON(SuccessDomain, successDomain_);
      };
      SuccessList() = default ;
      SuccessList(const SuccessList &) = default ;
      SuccessList(SuccessList &&) = default ;
      SuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessList() = default ;
      SuccessList& operator=(const SuccessList &) = default ;
      SuccessList& operator=(SuccessList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->successDomain_ == nullptr; };
      // successDomain Field Functions 
      bool hasSuccessDomain() const { return this->successDomain_ != nullptr;};
      void deleteSuccessDomain() { this->successDomain_ = nullptr;};
      inline const vector<string> & getSuccessDomain() const { DARABONBA_PTR_GET_CONST(successDomain_, vector<string>) };
      inline vector<string> getSuccessDomain() { DARABONBA_PTR_GET(successDomain_, vector<string>) };
      inline SuccessList& setSuccessDomain(const vector<string> & successDomain) { DARABONBA_PTR_SET_VALUE(successDomain_, successDomain) };
      inline SuccessList& setSuccessDomain(vector<string> && successDomain) { DARABONBA_PTR_SET_RVALUE(successDomain_, successDomain) };


    protected:
      shared_ptr<vector<string>> successDomain_ {};
    };

    class FailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailList& obj) { 
        DARABONBA_PTR_TO_JSON(FailDomain, failDomain_);
      };
      friend void from_json(const Darabonba::Json& j, FailList& obj) { 
        DARABONBA_PTR_FROM_JSON(FailDomain, failDomain_);
      };
      FailList() = default ;
      FailList(const FailList &) = default ;
      FailList(FailList &&) = default ;
      FailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailList() = default ;
      FailList& operator=(const FailList &) = default ;
      FailList& operator=(FailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failDomain_ == nullptr; };
      // failDomain Field Functions 
      bool hasFailDomain() const { return this->failDomain_ != nullptr;};
      void deleteFailDomain() { this->failDomain_ = nullptr;};
      inline const vector<string> & getFailDomain() const { DARABONBA_PTR_GET_CONST(failDomain_, vector<string>) };
      inline vector<string> getFailDomain() { DARABONBA_PTR_GET(failDomain_, vector<string>) };
      inline FailList& setFailDomain(const vector<string> & failDomain) { DARABONBA_PTR_SET_VALUE(failDomain_, failDomain) };
      inline FailList& setFailDomain(vector<string> && failDomain) { DARABONBA_PTR_SET_RVALUE(failDomain_, failDomain) };


    protected:
      shared_ptr<vector<string>> failDomain_ {};
    };

    virtual bool empty() const override { return this->failList_ == nullptr
        && this->requestId_ == nullptr && this->successList_ == nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const TransferInCheckMailTokenResponseBody::FailList & getFailList() const { DARABONBA_PTR_GET_CONST(failList_, TransferInCheckMailTokenResponseBody::FailList) };
    inline TransferInCheckMailTokenResponseBody::FailList getFailList() { DARABONBA_PTR_GET(failList_, TransferInCheckMailTokenResponseBody::FailList) };
    inline TransferInCheckMailTokenResponseBody& setFailList(const TransferInCheckMailTokenResponseBody::FailList & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline TransferInCheckMailTokenResponseBody& setFailList(TransferInCheckMailTokenResponseBody::FailList && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransferInCheckMailTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const TransferInCheckMailTokenResponseBody::SuccessList & getSuccessList() const { DARABONBA_PTR_GET_CONST(successList_, TransferInCheckMailTokenResponseBody::SuccessList) };
    inline TransferInCheckMailTokenResponseBody::SuccessList getSuccessList() { DARABONBA_PTR_GET(successList_, TransferInCheckMailTokenResponseBody::SuccessList) };
    inline TransferInCheckMailTokenResponseBody& setSuccessList(const TransferInCheckMailTokenResponseBody::SuccessList & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline TransferInCheckMailTokenResponseBody& setSuccessList(TransferInCheckMailTokenResponseBody::SuccessList && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    shared_ptr<TransferInCheckMailTokenResponseBody::FailList> failList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<TransferInCheckMailTokenResponseBody::SuccessList> successList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
