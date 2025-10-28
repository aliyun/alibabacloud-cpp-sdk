// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPRESPONSEBODYDATAENTRYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGROUPRESPONSEBODYDATAENTRYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSwimmingLaneGroupResponseBodyDataEntryApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGroupResponseBodyDataEntryApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGroupResponseBodyDataEntryApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListSwimmingLaneGroupResponseBodyDataEntryApplication() = default ;
    ListSwimmingLaneGroupResponseBodyDataEntryApplication(const ListSwimmingLaneGroupResponseBodyDataEntryApplication &) = default ;
    ListSwimmingLaneGroupResponseBodyDataEntryApplication(ListSwimmingLaneGroupResponseBodyDataEntryApplication &&) = default ;
    ListSwimmingLaneGroupResponseBodyDataEntryApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGroupResponseBodyDataEntryApplication() = default ;
    ListSwimmingLaneGroupResponseBodyDataEntryApplication& operator=(const ListSwimmingLaneGroupResponseBodyDataEntryApplication &) = default ;
    ListSwimmingLaneGroupResponseBodyDataEntryApplication& operator=(ListSwimmingLaneGroupResponseBodyDataEntryApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->source_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListSwimmingLaneGroupResponseBodyDataEntryApplication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListSwimmingLaneGroupResponseBodyDataEntryApplication& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListSwimmingLaneGroupResponseBodyDataEntryApplication& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The data source. Set the value to EDAS.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
