// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPROMINSTALLSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPROMINSTALLSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryPromInstallStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPromInstallStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(isControllerInstalled, isControllerInstalled_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPromInstallStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(isControllerInstalled, isControllerInstalled_);
    };
    QueryPromInstallStatusResponseBodyData() = default ;
    QueryPromInstallStatusResponseBodyData(const QueryPromInstallStatusResponseBodyData &) = default ;
    QueryPromInstallStatusResponseBodyData(QueryPromInstallStatusResponseBodyData &&) = default ;
    QueryPromInstallStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPromInstallStatusResponseBodyData() = default ;
    QueryPromInstallStatusResponseBodyData& operator=(const QueryPromInstallStatusResponseBodyData &) = default ;
    QueryPromInstallStatusResponseBodyData& operator=(QueryPromInstallStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isControllerInstalled_ != nullptr; };
    // isControllerInstalled Field Functions 
    bool hasIsControllerInstalled() const { return this->isControllerInstalled_ != nullptr;};
    void deleteIsControllerInstalled() { this->isControllerInstalled_ = nullptr;};
    inline bool isControllerInstalled() const { DARABONBA_PTR_GET_DEFAULT(isControllerInstalled_, false) };
    inline QueryPromInstallStatusResponseBodyData& setIsControllerInstalled(bool isControllerInstalled) { DARABONBA_PTR_SET_VALUE(isControllerInstalled_, isControllerInstalled) };


  protected:
    // Indicates whether the call was successful. Valid values:
    // 
    // true: The call was successful. false: The call fails.
    std::shared_ptr<bool> isControllerInstalled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
