// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADVANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETADVANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetAdvanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdvanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdvanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetAdvanceConfigRequest() = default ;
    GetAdvanceConfigRequest(const GetAdvanceConfigRequest &) = default ;
    GetAdvanceConfigRequest(GetAdvanceConfigRequest &&) = default ;
    GetAdvanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdvanceConfigRequest() = default ;
    GetAdvanceConfigRequest& operator=(const GetAdvanceConfigRequest &) = default ;
    GetAdvanceConfigRequest& operator=(GetAdvanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAdvanceConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // *   The type of the advanced configuration. Valid values: -ONLINE: online configuration
    // *   \\-ONLINE_CAVA: online Cava configuration
    // *   \\-ONLINE_PLUGIN: online plug-in configuration
    // *   \\-ONLINE_QUERY: query configuration
    // *   \\-OFFLINE_DICT: offline dictionary configuration
    // *   \\-OFFLINE_TABLE: offline table configuration
    // *   \\-OFFLINE_COMMON: offline configuration
    // *   \\-OFFLINE_PLUGIN: offline plug-in configuration
    // *   \\-OFFLINE_INDEX: index configuration
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
