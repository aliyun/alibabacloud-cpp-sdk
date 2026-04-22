// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSGLOBALOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSGLOBALOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInterAuthStatisticsGlobalOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterAuthStatisticsGlobalOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_TO_JSON(ServerRegion, serverRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterAuthStatisticsGlobalOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_FROM_JSON(ServerRegion, serverRegion_);
    };
    DescribeInterAuthStatisticsGlobalOverviewRequest() = default ;
    DescribeInterAuthStatisticsGlobalOverviewRequest(const DescribeInterAuthStatisticsGlobalOverviewRequest &) = default ;
    DescribeInterAuthStatisticsGlobalOverviewRequest(DescribeInterAuthStatisticsGlobalOverviewRequest &&) = default ;
    DescribeInterAuthStatisticsGlobalOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterAuthStatisticsGlobalOverviewRequest() = default ;
    DescribeInterAuthStatisticsGlobalOverviewRequest& operator=(const DescribeInterAuthStatisticsGlobalOverviewRequest &) = default ;
    DescribeInterAuthStatisticsGlobalOverviewRequest& operator=(DescribeInterAuthStatisticsGlobalOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clientToken_ == nullptr && this->overviewPeriod_ == nullptr && this->serverRegion_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribeInterAuthStatisticsGlobalOverviewRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeInterAuthStatisticsGlobalOverviewRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // overviewPeriod Field Functions 
    bool hasOverviewPeriod() const { return this->overviewPeriod_ != nullptr;};
    void deleteOverviewPeriod() { this->overviewPeriod_ = nullptr;};
    inline string getOverviewPeriod() const { DARABONBA_PTR_GET_DEFAULT(overviewPeriod_, "") };
    inline DescribeInterAuthStatisticsGlobalOverviewRequest& setOverviewPeriod(string overviewPeriod) { DARABONBA_PTR_SET_VALUE(overviewPeriod_, overviewPeriod) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribeInterAuthStatisticsGlobalOverviewRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> overviewPeriod_ {};
    shared_ptr<string> serverRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
