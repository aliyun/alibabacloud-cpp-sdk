// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOLSETSTATUSOUTPUTSURLS_HPP_
#define ALIBABACLOUD_MODELS_TOOLSETSTATUSOUTPUTSURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ToolsetStatusOutputsUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ToolsetStatusOutputsUrls& obj) { 
      DARABONBA_PTR_TO_JSON(internetUrl, internetUrl_);
      DARABONBA_PTR_TO_JSON(intranetUrl, intranetUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ToolsetStatusOutputsUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(internetUrl, internetUrl_);
      DARABONBA_PTR_FROM_JSON(intranetUrl, intranetUrl_);
    };
    ToolsetStatusOutputsUrls() = default ;
    ToolsetStatusOutputsUrls(const ToolsetStatusOutputsUrls &) = default ;
    ToolsetStatusOutputsUrls(ToolsetStatusOutputsUrls &&) = default ;
    ToolsetStatusOutputsUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ToolsetStatusOutputsUrls() = default ;
    ToolsetStatusOutputsUrls& operator=(const ToolsetStatusOutputsUrls &) = default ;
    ToolsetStatusOutputsUrls& operator=(ToolsetStatusOutputsUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->internetUrl_ != nullptr
        && this->intranetUrl_ != nullptr; };
    // internetUrl Field Functions 
    bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
    void deleteInternetUrl() { this->internetUrl_ = nullptr;};
    inline string internetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
    inline ToolsetStatusOutputsUrls& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


    // intranetUrl Field Functions 
    bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
    void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
    inline string intranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
    inline ToolsetStatusOutputsUrls& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


  protected:
    std::shared_ptr<string> internetUrl_ = nullptr;
    std::shared_ptr<string> intranetUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
