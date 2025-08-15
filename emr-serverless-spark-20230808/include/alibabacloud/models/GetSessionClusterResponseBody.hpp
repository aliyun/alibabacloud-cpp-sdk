// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSessionClusterResponseBodySessionCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSessionClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionCluster, sessionCluster_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionCluster, sessionCluster_);
    };
    GetSessionClusterResponseBody() = default ;
    GetSessionClusterResponseBody(const GetSessionClusterResponseBody &) = default ;
    GetSessionClusterResponseBody(GetSessionClusterResponseBody &&) = default ;
    GetSessionClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionClusterResponseBody() = default ;
    GetSessionClusterResponseBody& operator=(const GetSessionClusterResponseBody &) = default ;
    GetSessionClusterResponseBody& operator=(GetSessionClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sessionCluster_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSessionClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionCluster Field Functions 
    bool hasSessionCluster() const { return this->sessionCluster_ != nullptr;};
    void deleteSessionCluster() { this->sessionCluster_ = nullptr;};
    inline const GetSessionClusterResponseBodySessionCluster & sessionCluster() const { DARABONBA_PTR_GET_CONST(sessionCluster_, GetSessionClusterResponseBodySessionCluster) };
    inline GetSessionClusterResponseBodySessionCluster sessionCluster() { DARABONBA_PTR_GET(sessionCluster_, GetSessionClusterResponseBodySessionCluster) };
    inline GetSessionClusterResponseBody& setSessionCluster(const GetSessionClusterResponseBodySessionCluster & sessionCluster) { DARABONBA_PTR_SET_VALUE(sessionCluster_, sessionCluster) };
    inline GetSessionClusterResponseBody& setSessionCluster(GetSessionClusterResponseBodySessionCluster && sessionCluster) { DARABONBA_PTR_SET_RVALUE(sessionCluster_, sessionCluster) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The session object.
    std::shared_ptr<GetSessionClusterResponseBodySessionCluster> sessionCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
