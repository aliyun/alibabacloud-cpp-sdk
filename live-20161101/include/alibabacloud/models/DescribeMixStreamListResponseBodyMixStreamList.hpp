// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIXSTREAMLISTRESPONSEBODYMIXSTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIXSTREAMLISTRESPONSEBODYMIXSTREAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeMixStreamListResponseBodyMixStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMixStreamListResponseBodyMixStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InputStreamNumber, inputStreamNumber_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(MixStreamTemplate, mixStreamTemplate_);
      DARABONBA_PTR_TO_JSON(MixstreamId, mixstreamId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMixStreamListResponseBodyMixStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InputStreamNumber, inputStreamNumber_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(MixStreamTemplate, mixStreamTemplate_);
      DARABONBA_PTR_FROM_JSON(MixstreamId, mixstreamId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeMixStreamListResponseBodyMixStreamList() = default ;
    DescribeMixStreamListResponseBodyMixStreamList(const DescribeMixStreamListResponseBodyMixStreamList &) = default ;
    DescribeMixStreamListResponseBodyMixStreamList(DescribeMixStreamListResponseBodyMixStreamList &&) = default ;
    DescribeMixStreamListResponseBodyMixStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMixStreamListResponseBodyMixStreamList() = default ;
    DescribeMixStreamListResponseBodyMixStreamList& operator=(const DescribeMixStreamListResponseBodyMixStreamList &) = default ;
    DescribeMixStreamListResponseBodyMixStreamList& operator=(DescribeMixStreamListResponseBodyMixStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->inputStreamNumber_ == nullptr && return this->layoutId_ == nullptr
        && return this->mixStreamTemplate_ == nullptr && return this->mixstreamId_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // inputStreamNumber Field Functions 
    bool hasInputStreamNumber() const { return this->inputStreamNumber_ != nullptr;};
    void deleteInputStreamNumber() { this->inputStreamNumber_ = nullptr;};
    inline int32_t inputStreamNumber() const { DARABONBA_PTR_GET_DEFAULT(inputStreamNumber_, 0) };
    inline DescribeMixStreamListResponseBodyMixStreamList& setInputStreamNumber(int32_t inputStreamNumber) { DARABONBA_PTR_SET_VALUE(inputStreamNumber_, inputStreamNumber) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // mixStreamTemplate Field Functions 
    bool hasMixStreamTemplate() const { return this->mixStreamTemplate_ != nullptr;};
    void deleteMixStreamTemplate() { this->mixStreamTemplate_ = nullptr;};
    inline string mixStreamTemplate() const { DARABONBA_PTR_GET_DEFAULT(mixStreamTemplate_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setMixStreamTemplate(string mixStreamTemplate) { DARABONBA_PTR_SET_VALUE(mixStreamTemplate_, mixStreamTemplate) };


    // mixstreamId Field Functions 
    bool hasMixstreamId() const { return this->mixstreamId_ != nullptr;};
    void deleteMixstreamId() { this->mixstreamId_ = nullptr;};
    inline string mixstreamId() const { DARABONBA_PTR_GET_DEFAULT(mixstreamId_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setMixstreamId(string mixstreamId) { DARABONBA_PTR_SET_VALUE(mixstreamId_, mixstreamId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeMixStreamListResponseBodyMixStreamList& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The time when the stream mixing task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the stream mixing task was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The number of input streams.
    std::shared_ptr<int32_t> inputStreamNumber_ = nullptr;
    // The ID of the layout.
    std::shared_ptr<string> layoutId_ = nullptr;
    // The stream mixing template.
    std::shared_ptr<string> mixStreamTemplate_ = nullptr;
    // The ID of the stream mixing task. You can specify this parameter in a request to delete the steam mixing task.
    std::shared_ptr<string> mixstreamId_ = nullptr;
    // The name of the output stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
