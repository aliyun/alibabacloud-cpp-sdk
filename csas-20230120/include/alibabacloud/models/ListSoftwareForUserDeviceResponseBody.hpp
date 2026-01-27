// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListSoftwareForUserDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwareForUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Software, software_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwareForUserDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Software, software_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListSoftwareForUserDeviceResponseBody() = default ;
    ListSoftwareForUserDeviceResponseBody(const ListSoftwareForUserDeviceResponseBody &) = default ;
    ListSoftwareForUserDeviceResponseBody(ListSoftwareForUserDeviceResponseBody &&) = default ;
    ListSoftwareForUserDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwareForUserDeviceResponseBody() = default ;
    ListSoftwareForUserDeviceResponseBody& operator=(const ListSoftwareForUserDeviceResponseBody &) = default ;
    ListSoftwareForUserDeviceResponseBody& operator=(ListSoftwareForUserDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Software : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Software& obj) { 
        DARABONBA_PTR_TO_JSON(Inc, inc_);
        DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Software& obj) { 
        DARABONBA_PTR_FROM_JSON(Inc, inc_);
        DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Versions, versions_);
      };
      Software() = default ;
      Software(const Software &) = default ;
      Software(Software &&) = default ;
      Software(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Software() = default ;
      Software& operator=(const Software &) = default ;
      Software& operator=(Software &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inc_ == nullptr
        && this->installTime_ == nullptr && this->name_ == nullptr && this->versions_ == nullptr; };
      // inc Field Functions 
      bool hasInc() const { return this->inc_ != nullptr;};
      void deleteInc() { this->inc_ = nullptr;};
      inline string getInc() const { DARABONBA_PTR_GET_DEFAULT(inc_, "") };
      inline Software& setInc(string inc) { DARABONBA_PTR_SET_VALUE(inc_, inc) };


      // installTime Field Functions 
      bool hasInstallTime() const { return this->installTime_ != nullptr;};
      void deleteInstallTime() { this->installTime_ = nullptr;};
      inline string getInstallTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
      inline Software& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Software& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
      inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
      inline Software& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Software& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      shared_ptr<string> inc_ {};
      shared_ptr<string> installTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> versions_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->software_ == nullptr && this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSoftwareForUserDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // software Field Functions 
    bool hasSoftware() const { return this->software_ != nullptr;};
    void deleteSoftware() { this->software_ = nullptr;};
    inline const vector<ListSoftwareForUserDeviceResponseBody::Software> & getSoftware() const { DARABONBA_PTR_GET_CONST(software_, vector<ListSoftwareForUserDeviceResponseBody::Software>) };
    inline vector<ListSoftwareForUserDeviceResponseBody::Software> getSoftware() { DARABONBA_PTR_GET(software_, vector<ListSoftwareForUserDeviceResponseBody::Software>) };
    inline ListSoftwareForUserDeviceResponseBody& setSoftware(const vector<ListSoftwareForUserDeviceResponseBody::Software> & software) { DARABONBA_PTR_SET_VALUE(software_, software) };
    inline ListSoftwareForUserDeviceResponseBody& setSoftware(vector<ListSoftwareForUserDeviceResponseBody::Software> && software) { DARABONBA_PTR_SET_RVALUE(software_, software) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListSoftwareForUserDeviceResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListSoftwareForUserDeviceResponseBody::Software>> software_ {};
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
