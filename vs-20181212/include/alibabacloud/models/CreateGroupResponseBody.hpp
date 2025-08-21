// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(GbIp, gbIp_);
      DARABONBA_PTR_TO_JSON(GbPort, gbPort_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(GbIp, gbIp_);
      DARABONBA_PTR_FROM_JSON(GbPort, gbPort_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateGroupResponseBody() = default ;
    CreateGroupResponseBody(const CreateGroupResponseBody &) = default ;
    CreateGroupResponseBody(CreateGroupResponseBody &&) = default ;
    CreateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupResponseBody() = default ;
    CreateGroupResponseBody& operator=(const CreateGroupResponseBody &) = default ;
    CreateGroupResponseBody& operator=(CreateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gbId_ != nullptr
        && this->gbIp_ != nullptr && this->gbPort_ != nullptr && this->id_ != nullptr && this->requestId_ != nullptr; };
    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string gbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline CreateGroupResponseBody& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // gbIp Field Functions 
    bool hasGbIp() const { return this->gbIp_ != nullptr;};
    void deleteGbIp() { this->gbIp_ = nullptr;};
    inline string gbIp() const { DARABONBA_PTR_GET_DEFAULT(gbIp_, "") };
    inline CreateGroupResponseBody& setGbIp(string gbIp) { DARABONBA_PTR_SET_VALUE(gbIp_, gbIp) };


    // gbPort Field Functions 
    bool hasGbPort() const { return this->gbPort_ != nullptr;};
    void deleteGbPort() { this->gbPort_ = nullptr;};
    inline int64_t gbPort() const { DARABONBA_PTR_GET_DEFAULT(gbPort_, 0L) };
    inline CreateGroupResponseBody& setGbPort(int64_t gbPort) { DARABONBA_PTR_SET_VALUE(gbPort_, gbPort) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateGroupResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> gbId_ = nullptr;
    std::shared_ptr<string> gbIp_ = nullptr;
    std::shared_ptr<int64_t> gbPort_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
