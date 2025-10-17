// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTREVERSEWRITERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTREVERSEWRITERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class StartReverseWriterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartReverseWriterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckPoint, checkPoint_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, StartReverseWriterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckPoint, checkPoint_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    StartReverseWriterRequest() = default ;
    StartReverseWriterRequest(const StartReverseWriterRequest &) = default ;
    StartReverseWriterRequest(StartReverseWriterRequest &&) = default ;
    StartReverseWriterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartReverseWriterRequest() = default ;
    StartReverseWriterRequest& operator=(const StartReverseWriterRequest &) = default ;
    StartReverseWriterRequest& operator=(StartReverseWriterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkPoint_ == nullptr
        && return this->dtsJobId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // checkPoint Field Functions 
    bool hasCheckPoint() const { return this->checkPoint_ != nullptr;};
    void deleteCheckPoint() { this->checkPoint_ = nullptr;};
    inline string checkPoint() const { DARABONBA_PTR_GET_DEFAULT(checkPoint_, "") };
    inline StartReverseWriterRequest& setCheckPoint(string checkPoint) { DARABONBA_PTR_SET_VALUE(checkPoint_, checkPoint) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline StartReverseWriterRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline StartReverseWriterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The offset of the Incremental Write module. Specify a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. 
    // 
    // > The default value is the offset that is automatically saved by DTS when the task is paused.
    std::shared_ptr<string> checkPoint_ = nullptr;
    // The ID of the reverse task that was created by calling the CreateReverseDtsJob operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
