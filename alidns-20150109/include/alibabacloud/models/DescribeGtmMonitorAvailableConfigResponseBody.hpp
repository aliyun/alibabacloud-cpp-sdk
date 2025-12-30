// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmMonitorAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeGtmMonitorAvailableConfigResponseBody(const DescribeGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBody(DescribeGtmMonitorAvailableConfigResponseBody &&) = default ;
    DescribeGtmMonitorAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeGtmMonitorAvailableConfigResponseBody& operator=(const DescribeGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBody& operator=(DescribeGtmMonitorAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IspCityNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IspCityNodes& obj) { 
        DARABONBA_PTR_TO_JSON(IspCityNode, ispCityNode_);
      };
      friend void from_json(const Darabonba::Json& j, IspCityNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(IspCityNode, ispCityNode_);
      };
      IspCityNodes() = default ;
      IspCityNodes(const IspCityNodes &) = default ;
      IspCityNodes(IspCityNodes &&) = default ;
      IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IspCityNodes() = default ;
      IspCityNodes& operator=(const IspCityNodes &) = default ;
      IspCityNodes& operator=(IspCityNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IspCityNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IspCityNode& obj) { 
          DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(GroupType, groupType_);
          DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
          DARABONBA_PTR_TO_JSON(IspName, ispName_);
          DARABONBA_PTR_TO_JSON(Mainland, mainland_);
        };
        friend void from_json(const Darabonba::Json& j, IspCityNode& obj) { 
          DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
          DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
          DARABONBA_PTR_FROM_JSON(IspName, ispName_);
          DARABONBA_PTR_FROM_JSON(Mainland, mainland_);
        };
        IspCityNode() = default ;
        IspCityNode(const IspCityNode &) = default ;
        IspCityNode(IspCityNode &&) = default ;
        IspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IspCityNode() = default ;
        IspCityNode& operator=(const IspCityNode &) = default ;
        IspCityNode& operator=(IspCityNode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->defaultSelected_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->ispCode_ == nullptr
        && this->ispName_ == nullptr && this->mainland_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline IspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline IspCityNode& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // defaultSelected Field Functions 
        bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
        void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
        inline bool getDefaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
        inline IspCityNode& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline IspCityNode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // groupType Field Functions 
        bool hasGroupType() const { return this->groupType_ != nullptr;};
        void deleteGroupType() { this->groupType_ = nullptr;};
        inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
        inline IspCityNode& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


        // ispCode Field Functions 
        bool hasIspCode() const { return this->ispCode_ != nullptr;};
        void deleteIspCode() { this->ispCode_ = nullptr;};
        inline string getIspCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
        inline IspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


        // ispName Field Functions 
        bool hasIspName() const { return this->ispName_ != nullptr;};
        void deleteIspName() { this->ispName_ = nullptr;};
        inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
        inline IspCityNode& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


        // mainland Field Functions 
        bool hasMainland() const { return this->mainland_ != nullptr;};
        void deleteMainland() { this->mainland_ = nullptr;};
        inline bool getMainland() const { DARABONBA_PTR_GET_DEFAULT(mainland_, false) };
        inline IspCityNode& setMainland(bool mainland) { DARABONBA_PTR_SET_VALUE(mainland_, mainland) };


      protected:
        // The code of the city where the monitored node is deployed.
        shared_ptr<string> cityCode_ {};
        // The display name of the city where the monitored node is deployed.
        shared_ptr<string> cityName_ {};
        // Indicates whether the monitored node is selected for the health check by default.
        shared_ptr<bool> defaultSelected_ {};
        // The name of the group to which the monitored node belongs.
        // 
        // Valid values: Overseas Nodes, BGP Nodes, and ISP Nodes.
        shared_ptr<string> groupName_ {};
        // The type of the group to which the monitored node belongs.
        // 
        // Valid values: BGP, OVERSEAS, and ISP.
        shared_ptr<string> groupType_ {};
        // The code of the Internet service provider (ISP) to which the monitored node belongs.
        // 
        // *   If the value of the GroupType parameter is BGP or OVERSEAS, the value of IspCode is 465 by default.
        // *   If the value of the GroupType parameter is not BGP or OVERSEAS, valid values of IspCode are 232, 132, and 5. and is used together with CityCode.
        shared_ptr<string> ispCode_ {};
        // The display name of the ISP to which the monitored node belongs.
        shared_ptr<string> ispName_ {};
        // Indicates whether the monitored node is deployed in the Chinese mainland.
        shared_ptr<bool> mainland_ {};
      };

      virtual bool empty() const override { return this->ispCityNode_ == nullptr; };
      // ispCityNode Field Functions 
      bool hasIspCityNode() const { return this->ispCityNode_ != nullptr;};
      void deleteIspCityNode() { this->ispCityNode_ = nullptr;};
      inline const vector<IspCityNodes::IspCityNode> & getIspCityNode() const { DARABONBA_PTR_GET_CONST(ispCityNode_, vector<IspCityNodes::IspCityNode>) };
      inline vector<IspCityNodes::IspCityNode> getIspCityNode() { DARABONBA_PTR_GET(ispCityNode_, vector<IspCityNodes::IspCityNode>) };
      inline IspCityNodes& setIspCityNode(const vector<IspCityNodes::IspCityNode> & ispCityNode) { DARABONBA_PTR_SET_VALUE(ispCityNode_, ispCityNode) };
      inline IspCityNodes& setIspCityNode(vector<IspCityNodes::IspCityNode> && ispCityNode) { DARABONBA_PTR_SET_RVALUE(ispCityNode_, ispCityNode) };


    protected:
      shared_ptr<vector<IspCityNodes::IspCityNode>> ispCityNode_ {};
    };

    virtual bool empty() const override { return this->ispCityNodes_ == nullptr
        && this->requestId_ == nullptr; };
    // ispCityNodes Field Functions 
    bool hasIspCityNodes() const { return this->ispCityNodes_ != nullptr;};
    void deleteIspCityNodes() { this->ispCityNodes_ = nullptr;};
    inline const DescribeGtmMonitorAvailableConfigResponseBody::IspCityNodes & getIspCityNodes() const { DARABONBA_PTR_GET_CONST(ispCityNodes_, DescribeGtmMonitorAvailableConfigResponseBody::IspCityNodes) };
    inline DescribeGtmMonitorAvailableConfigResponseBody::IspCityNodes getIspCityNodes() { DARABONBA_PTR_GET(ispCityNodes_, DescribeGtmMonitorAvailableConfigResponseBody::IspCityNodes) };
    inline DescribeGtmMonitorAvailableConfigResponseBody& setIspCityNodes(const DescribeGtmMonitorAvailableConfigResponseBody::IspCityNodes & ispCityNodes) { DARABONBA_PTR_SET_VALUE(ispCityNodes_, ispCityNodes) };
    inline DescribeGtmMonitorAvailableConfigResponseBody& setIspCityNodes(DescribeGtmMonitorAvailableConfigResponseBody::IspCityNodes && ispCityNodes) { DARABONBA_PTR_SET_RVALUE(ispCityNodes_, ispCityNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitored nodes.
    shared_ptr<DescribeGtmMonitorAvailableConfigResponseBody::IspCityNodes> ispCityNodes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
