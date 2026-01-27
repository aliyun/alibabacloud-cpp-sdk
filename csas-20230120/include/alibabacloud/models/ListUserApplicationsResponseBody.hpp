// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddressGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListUserApplicationsResponseBody() = default ;
    ListUserApplicationsResponseBody(const ListUserApplicationsResponseBody &) = default ;
    ListUserApplicationsResponseBody(ListUserApplicationsResponseBody &&) = default ;
    ListUserApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserApplicationsResponseBody() = default ;
    ListUserApplicationsResponseBody& operator=(const ListUserApplicationsResponseBody &) = default ;
    ListUserApplicationsResponseBody& operator=(ListUserApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(AddressGroups, addressGroups_);
        DARABONBA_PTR_TO_JSON(Addresses, addresses_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(AddressGroups, addressGroups_);
        DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PortRanges : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
          DARABONBA_PTR_TO_JSON(Begin, begin_);
          DARABONBA_PTR_TO_JSON(End, end_);
        };
        friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
          DARABONBA_PTR_FROM_JSON(Begin, begin_);
          DARABONBA_PTR_FROM_JSON(End, end_);
        };
        PortRanges() = default ;
        PortRanges(const PortRanges &) = default ;
        PortRanges(PortRanges &&) = default ;
        PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PortRanges() = default ;
        PortRanges& operator=(const PortRanges &) = default ;
        PortRanges& operator=(PortRanges &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline string getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, "") };
        inline PortRanges& setBegin(string begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline PortRanges& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      protected:
        shared_ptr<string> begin_ {};
        shared_ptr<string> end_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->addressGroups_ == nullptr && this->addresses_ == nullptr && this->applicationId_ == nullptr && this->configMode_ == nullptr && this->name_ == nullptr
        && this->portRanges_ == nullptr && this->protocol_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Applications& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // addressGroups Field Functions 
      bool hasAddressGroups() const { return this->addressGroups_ != nullptr;};
      void deleteAddressGroups() { this->addressGroups_ = nullptr;};
      inline const vector<AddressGroup> & getAddressGroups() const { DARABONBA_PTR_GET_CONST(addressGroups_, vector<AddressGroup>) };
      inline vector<AddressGroup> getAddressGroups() { DARABONBA_PTR_GET(addressGroups_, vector<AddressGroup>) };
      inline Applications& setAddressGroups(const vector<AddressGroup> & addressGroups) { DARABONBA_PTR_SET_VALUE(addressGroups_, addressGroups) };
      inline Applications& setAddressGroups(vector<AddressGroup> && addressGroups) { DARABONBA_PTR_SET_RVALUE(addressGroups_, addressGroups) };


      // addresses Field Functions 
      bool hasAddresses() const { return this->addresses_ != nullptr;};
      void deleteAddresses() { this->addresses_ = nullptr;};
      inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
      inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
      inline Applications& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
      inline Applications& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // configMode Field Functions 
      bool hasConfigMode() const { return this->configMode_ != nullptr;};
      void deleteConfigMode() { this->configMode_ = nullptr;};
      inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
      inline Applications& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Applications& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // portRanges Field Functions 
      bool hasPortRanges() const { return this->portRanges_ != nullptr;};
      void deletePortRanges() { this->portRanges_ = nullptr;};
      inline const vector<Applications::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<Applications::PortRanges>) };
      inline vector<Applications::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<Applications::PortRanges>) };
      inline Applications& setPortRanges(const vector<Applications::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
      inline Applications& setPortRanges(vector<Applications::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Applications& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<vector<AddressGroup>> addressGroups_ {};
      shared_ptr<vector<string>> addresses_ {};
      shared_ptr<string> applicationId_ {};
      shared_ptr<string> configMode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Applications::PortRanges>> portRanges_ {};
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListUserApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListUserApplicationsResponseBody::Applications>) };
    inline vector<ListUserApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListUserApplicationsResponseBody::Applications>) };
    inline ListUserApplicationsResponseBody& setApplications(const vector<ListUserApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListUserApplicationsResponseBody& setApplications(vector<ListUserApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListUserApplicationsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<vector<ListUserApplicationsResponseBody::Applications>> applications_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
