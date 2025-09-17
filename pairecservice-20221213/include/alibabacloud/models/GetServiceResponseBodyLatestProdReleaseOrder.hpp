// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYLATESTPRODRELEASEORDER_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYLATESTPRODRELEASEORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetServiceResponseBodyLatestProdReleaseOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyLatestProdReleaseOrder& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(ReleaseInfo, releaseInfo_);
      DARABONBA_PTR_TO_JSON(ReleaseOrderId, releaseOrderId_);
      DARABONBA_PTR_TO_JSON(Releaser, releaser_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyLatestProdReleaseOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(ReleaseInfo, releaseInfo_);
      DARABONBA_PTR_FROM_JSON(ReleaseOrderId, releaseOrderId_);
      DARABONBA_PTR_FROM_JSON(Releaser, releaser_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetServiceResponseBodyLatestProdReleaseOrder() = default ;
    GetServiceResponseBodyLatestProdReleaseOrder(const GetServiceResponseBodyLatestProdReleaseOrder &) = default ;
    GetServiceResponseBodyLatestProdReleaseOrder(GetServiceResponseBodyLatestProdReleaseOrder &&) = default ;
    GetServiceResponseBodyLatestProdReleaseOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyLatestProdReleaseOrder() = default ;
    GetServiceResponseBodyLatestProdReleaseOrder& operator=(const GetServiceResponseBodyLatestProdReleaseOrder &) = default ;
    GetServiceResponseBodyLatestProdReleaseOrder& operator=(GetServiceResponseBodyLatestProdReleaseOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->imageVersion_ != nullptr && this->releaseInfo_ != nullptr && this->releaseOrderId_ != nullptr && this->releaser_ != nullptr && this->topic_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetServiceResponseBodyLatestProdReleaseOrder& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline GetServiceResponseBodyLatestProdReleaseOrder& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // releaseInfo Field Functions 
    bool hasReleaseInfo() const { return this->releaseInfo_ != nullptr;};
    void deleteReleaseInfo() { this->releaseInfo_ = nullptr;};
    inline string releaseInfo() const { DARABONBA_PTR_GET_DEFAULT(releaseInfo_, "") };
    inline GetServiceResponseBodyLatestProdReleaseOrder& setReleaseInfo(string releaseInfo) { DARABONBA_PTR_SET_VALUE(releaseInfo_, releaseInfo) };


    // releaseOrderId Field Functions 
    bool hasReleaseOrderId() const { return this->releaseOrderId_ != nullptr;};
    void deleteReleaseOrderId() { this->releaseOrderId_ = nullptr;};
    inline string releaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(releaseOrderId_, "") };
    inline GetServiceResponseBodyLatestProdReleaseOrder& setReleaseOrderId(string releaseOrderId) { DARABONBA_PTR_SET_VALUE(releaseOrderId_, releaseOrderId) };


    // releaser Field Functions 
    bool hasReleaser() const { return this->releaser_ != nullptr;};
    void deleteReleaser() { this->releaser_ = nullptr;};
    inline string releaser() const { DARABONBA_PTR_GET_DEFAULT(releaser_, "") };
    inline GetServiceResponseBodyLatestProdReleaseOrder& setReleaser(string releaser) { DARABONBA_PTR_SET_VALUE(releaser_, releaser) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetServiceResponseBodyLatestProdReleaseOrder& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> imageVersion_ = nullptr;
    std::shared_ptr<string> releaseInfo_ = nullptr;
    std::shared_ptr<string> releaseOrderId_ = nullptr;
    std::shared_ptr<string> releaser_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
