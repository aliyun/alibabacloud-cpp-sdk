// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(kernel_version, kernelVersion_);
        DARABONBA_ANY_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(os_arch, osArch_);
        DARABONBA_PTR_TO_JSON(os_health_score, osHealthScore_);
        DARABONBA_PTR_TO_JSON(os_name, osName_);
        DARABONBA_PTR_TO_JSON(os_name_id, osNameId_);
        DARABONBA_PTR_TO_JSON(os_version, osVersion_);
        DARABONBA_PTR_TO_JSON(os_version_id, osVersionId_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(instance, instance_);
        DARABONBA_PTR_FROM_JSON(kernel_version, kernelVersion_);
        DARABONBA_ANY_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(os_arch, osArch_);
        DARABONBA_PTR_FROM_JSON(os_health_score, osHealthScore_);
        DARABONBA_PTR_FROM_JSON(os_name, osName_);
        DARABONBA_PTR_FROM_JSON(os_name_id, osNameId_);
        DARABONBA_PTR_FROM_JSON(os_version, osVersion_);
        DARABONBA_PTR_FROM_JSON(os_version_id, osVersionId_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->instance_ == nullptr && this->kernelVersion_ == nullptr && this->meta_ == nullptr && this->osArch_ == nullptr && this->osHealthScore_ == nullptr
        && this->osName_ == nullptr && this->osNameId_ == nullptr && this->osVersion_ == nullptr && this->osVersionId_ == nullptr && this->region_ == nullptr
        && this->status_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
      inline Data& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


      // kernelVersion Field Functions 
      bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
      void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
      inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
      inline Data& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline       const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
      Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
      inline Data& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
      inline Data& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


      // osArch Field Functions 
      bool hasOsArch() const { return this->osArch_ != nullptr;};
      void deleteOsArch() { this->osArch_ = nullptr;};
      inline string getOsArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
      inline Data& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


      // osHealthScore Field Functions 
      bool hasOsHealthScore() const { return this->osHealthScore_ != nullptr;};
      void deleteOsHealthScore() { this->osHealthScore_ = nullptr;};
      inline string getOsHealthScore() const { DARABONBA_PTR_GET_DEFAULT(osHealthScore_, "") };
      inline Data& setOsHealthScore(string osHealthScore) { DARABONBA_PTR_SET_VALUE(osHealthScore_, osHealthScore) };


      // osName Field Functions 
      bool hasOsName() const { return this->osName_ != nullptr;};
      void deleteOsName() { this->osName_ = nullptr;};
      inline string getOsName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
      inline Data& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


      // osNameId Field Functions 
      bool hasOsNameId() const { return this->osNameId_ != nullptr;};
      void deleteOsNameId() { this->osNameId_ = nullptr;};
      inline string getOsNameId() const { DARABONBA_PTR_GET_DEFAULT(osNameId_, "") };
      inline Data& setOsNameId(string osNameId) { DARABONBA_PTR_SET_VALUE(osNameId_, osNameId) };


      // osVersion Field Functions 
      bool hasOsVersion() const { return this->osVersion_ != nullptr;};
      void deleteOsVersion() { this->osVersion_ = nullptr;};
      inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
      inline Data& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      // osVersionId Field Functions 
      bool hasOsVersionId() const { return this->osVersionId_ != nullptr;};
      void deleteOsVersionId() { this->osVersionId_ = nullptr;};
      inline string getOsVersionId() const { DARABONBA_PTR_GET_DEFAULT(osVersionId_, "") };
      inline Data& setOsVersionId(string osVersionId) { DARABONBA_PTR_SET_VALUE(osVersionId_, osVersionId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> instance_ {};
      shared_ptr<string> kernelVersion_ {};
      Darabonba::Json meta_ {};
      shared_ptr<string> osArch_ {};
      shared_ptr<string> osHealthScore_ {};
      shared_ptr<string> osName_ {};
      shared_ptr<string> osNameId_ {};
      shared_ptr<string> osVersion_ {};
      shared_ptr<string> osVersionId_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInstancesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInstancesResponseBody::Data>) };
    inline vector<ListInstancesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInstancesResponseBody::Data>) };
    inline ListInstancesResponseBody& setData(const vector<ListInstancesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstancesResponseBody& setData(vector<ListInstancesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListInstancesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListInstancesResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
