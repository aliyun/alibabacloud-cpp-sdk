// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEBTERMINALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWEBTERMINALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetWebTerminalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWebTerminalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(IsShared, isShared_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
    };
    friend void from_json(const Darabonba::Json& j, GetWebTerminalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(IsShared, isShared_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
    };
    GetWebTerminalRequest() = default ;
    GetWebTerminalRequest(const GetWebTerminalRequest &) = default ;
    GetWebTerminalRequest(GetWebTerminalRequest &&) = default ;
    GetWebTerminalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWebTerminalRequest() = default ;
    GetWebTerminalRequest& operator=(const GetWebTerminalRequest &) = default ;
    GetWebTerminalRequest& operator=(GetWebTerminalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerName_ == nullptr
        && this->isShared_ == nullptr && this->podUid_ == nullptr; };
    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline GetWebTerminalRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool getIsShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline GetWebTerminalRequest& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string getPodUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline GetWebTerminalRequest& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


  protected:
    // The name of the container. If this parameter is not specified, the WebTerminal of the primary container is accessed.
    shared_ptr<string> containerName_ {};
    // Specifies whether to create a shareable link for accessing the container. Valid values:
    // - true: Returns a shareable link for accessing the container. The link expires after 30 seconds and can be used only once. After the container is accessed through this link, subsequent requests to access the container by using the same link become invalid.
    // - false: Returns a regular link for accessing the container. Alibaba Cloud identity verification is required when you use the link. The link expires after 30 seconds.
    shared_ptr<bool> isShared_ {};
    // The Pod UID.
    shared_ptr<string> podUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
