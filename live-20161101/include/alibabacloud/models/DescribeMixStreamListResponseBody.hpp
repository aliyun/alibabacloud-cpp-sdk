// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIXSTREAMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIXSTREAMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeMixStreamListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMixStreamListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MixStreamList, mixStreamList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMixStreamListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MixStreamList, mixStreamList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMixStreamListResponseBody() = default ;
    DescribeMixStreamListResponseBody(const DescribeMixStreamListResponseBody &) = default ;
    DescribeMixStreamListResponseBody(DescribeMixStreamListResponseBody &&) = default ;
    DescribeMixStreamListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMixStreamListResponseBody() = default ;
    DescribeMixStreamListResponseBody& operator=(const DescribeMixStreamListResponseBody &) = default ;
    DescribeMixStreamListResponseBody& operator=(DescribeMixStreamListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MixStreamList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MixStreamList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, MixStreamList& obj) { 
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
      MixStreamList() = default ;
      MixStreamList(const MixStreamList &) = default ;
      MixStreamList(MixStreamList &&) = default ;
      MixStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MixStreamList() = default ;
      MixStreamList& operator=(const MixStreamList &) = default ;
      MixStreamList& operator=(MixStreamList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->inputStreamNumber_ == nullptr && this->layoutId_ == nullptr
        && this->mixStreamTemplate_ == nullptr && this->mixstreamId_ == nullptr && this->streamName_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline MixStreamList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline MixStreamList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline MixStreamList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline MixStreamList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // inputStreamNumber Field Functions 
      bool hasInputStreamNumber() const { return this->inputStreamNumber_ != nullptr;};
      void deleteInputStreamNumber() { this->inputStreamNumber_ = nullptr;};
      inline int32_t getInputStreamNumber() const { DARABONBA_PTR_GET_DEFAULT(inputStreamNumber_, 0) };
      inline MixStreamList& setInputStreamNumber(int32_t inputStreamNumber) { DARABONBA_PTR_SET_VALUE(inputStreamNumber_, inputStreamNumber) };


      // layoutId Field Functions 
      bool hasLayoutId() const { return this->layoutId_ != nullptr;};
      void deleteLayoutId() { this->layoutId_ = nullptr;};
      inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
      inline MixStreamList& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


      // mixStreamTemplate Field Functions 
      bool hasMixStreamTemplate() const { return this->mixStreamTemplate_ != nullptr;};
      void deleteMixStreamTemplate() { this->mixStreamTemplate_ = nullptr;};
      inline string getMixStreamTemplate() const { DARABONBA_PTR_GET_DEFAULT(mixStreamTemplate_, "") };
      inline MixStreamList& setMixStreamTemplate(string mixStreamTemplate) { DARABONBA_PTR_SET_VALUE(mixStreamTemplate_, mixStreamTemplate) };


      // mixstreamId Field Functions 
      bool hasMixstreamId() const { return this->mixstreamId_ != nullptr;};
      void deleteMixstreamId() { this->mixstreamId_ = nullptr;};
      inline string getMixstreamId() const { DARABONBA_PTR_GET_DEFAULT(mixstreamId_, "") };
      inline MixStreamList& setMixstreamId(string mixstreamId) { DARABONBA_PTR_SET_VALUE(mixstreamId_, mixstreamId) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline MixStreamList& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    protected:
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The main streaming domain.
      shared_ptr<string> domainName_ {};
      // The time when the stream mixing task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> gmtCreate_ {};
      // The time when the stream mixing task was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The number of input streams.
      shared_ptr<int32_t> inputStreamNumber_ {};
      // The ID of the layout.
      shared_ptr<string> layoutId_ {};
      // The stream mixing template.
      shared_ptr<string> mixStreamTemplate_ {};
      // The ID of the stream mixing task. You can specify this parameter in a request to delete the steam mixing task.
      shared_ptr<string> mixstreamId_ {};
      // The name of the output stream.
      shared_ptr<string> streamName_ {};
    };

    virtual bool empty() const override { return this->mixStreamList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // mixStreamList Field Functions 
    bool hasMixStreamList() const { return this->mixStreamList_ != nullptr;};
    void deleteMixStreamList() { this->mixStreamList_ = nullptr;};
    inline const vector<DescribeMixStreamListResponseBody::MixStreamList> & getMixStreamList() const { DARABONBA_PTR_GET_CONST(mixStreamList_, vector<DescribeMixStreamListResponseBody::MixStreamList>) };
    inline vector<DescribeMixStreamListResponseBody::MixStreamList> getMixStreamList() { DARABONBA_PTR_GET(mixStreamList_, vector<DescribeMixStreamListResponseBody::MixStreamList>) };
    inline DescribeMixStreamListResponseBody& setMixStreamList(const vector<DescribeMixStreamListResponseBody::MixStreamList> & mixStreamList) { DARABONBA_PTR_SET_VALUE(mixStreamList_, mixStreamList) };
    inline DescribeMixStreamListResponseBody& setMixStreamList(vector<DescribeMixStreamListResponseBody::MixStreamList> && mixStreamList) { DARABONBA_PTR_SET_RVALUE(mixStreamList_, mixStreamList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMixStreamListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMixStreamListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Details about the stream mixing tasks.
    shared_ptr<vector<DescribeMixStreamListResponseBody::MixStreamList>> mixStreamList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of tasks.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
