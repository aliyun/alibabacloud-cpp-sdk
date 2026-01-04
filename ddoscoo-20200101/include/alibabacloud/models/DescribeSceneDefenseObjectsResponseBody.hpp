// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEOBJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEOBJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefenseObjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefenseObjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefenseObjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSceneDefenseObjectsResponseBody() = default ;
    DescribeSceneDefenseObjectsResponseBody(const DescribeSceneDefenseObjectsResponseBody &) = default ;
    DescribeSceneDefenseObjectsResponseBody(DescribeSceneDefenseObjectsResponseBody &&) = default ;
    DescribeSceneDefenseObjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefenseObjectsResponseBody() = default ;
    DescribeSceneDefenseObjectsResponseBody& operator=(const DescribeSceneDefenseObjectsResponseBody &) = default ;
    DescribeSceneDefenseObjectsResponseBody& operator=(DescribeSceneDefenseObjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Objects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Objects& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(Vip, vip_);
      };
      friend void from_json(const Darabonba::Json& j, Objects& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(Vip, vip_);
      };
      Objects() = default ;
      Objects(const Objects &) = default ;
      Objects(Objects &&) = default ;
      Objects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Objects() = default ;
      Objects& operator=(const Objects &) = default ;
      Objects& operator=(Objects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->policyId_ == nullptr && this->vip_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Objects& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Objects& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // vip Field Functions 
      bool hasVip() const { return this->vip_ != nullptr;};
      void deleteVip() { this->vip_ = nullptr;};
      inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
      inline Objects& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


    protected:
      // The domain name that is protected by the policy.
      shared_ptr<string> domain_ {};
      // The ID of the policy.
      shared_ptr<string> policyId_ {};
      // The IP address of the Anti-DDoS Pro or Anti-DDoS Premium instance that is protected by the policy.
      shared_ptr<string> vip_ {};
    };

    virtual bool empty() const override { return this->objects_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline const vector<DescribeSceneDefenseObjectsResponseBody::Objects> & getObjects() const { DARABONBA_PTR_GET_CONST(objects_, vector<DescribeSceneDefenseObjectsResponseBody::Objects>) };
    inline vector<DescribeSceneDefenseObjectsResponseBody::Objects> getObjects() { DARABONBA_PTR_GET(objects_, vector<DescribeSceneDefenseObjectsResponseBody::Objects>) };
    inline DescribeSceneDefenseObjectsResponseBody& setObjects(const vector<DescribeSceneDefenseObjectsResponseBody::Objects> & objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };
    inline DescribeSceneDefenseObjectsResponseBody& setObjects(vector<DescribeSceneDefenseObjectsResponseBody::Objects> && objects) { DARABONBA_PTR_SET_RVALUE(objects_, objects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSceneDefenseObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSceneDefenseObjectsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the protected assets.
    shared_ptr<vector<DescribeSceneDefenseObjectsResponseBody::Objects>> objects_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
