// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATACONSOLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATACONSOLECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataConsoleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataConsoleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TipContent, tipContent_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataConsoleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TipContent, tipContent_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetPropertiesResponseBodyDataConsoleConfig() = default ;
    GetPropertiesResponseBodyDataConsoleConfig(const GetPropertiesResponseBodyDataConsoleConfig &) = default ;
    GetPropertiesResponseBodyDataConsoleConfig(GetPropertiesResponseBodyDataConsoleConfig &&) = default ;
    GetPropertiesResponseBodyDataConsoleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataConsoleConfig() = default ;
    GetPropertiesResponseBodyDataConsoleConfig& operator=(const GetPropertiesResponseBodyDataConsoleConfig &) = default ;
    GetPropertiesResponseBodyDataConsoleConfig& operator=(GetPropertiesResponseBodyDataConsoleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tipContent_ == nullptr
        && return this->title_ == nullptr; };
    // tipContent Field Functions 
    bool hasTipContent() const { return this->tipContent_ != nullptr;};
    void deleteTipContent() { this->tipContent_ = nullptr;};
    inline string tipContent() const { DARABONBA_PTR_GET_DEFAULT(tipContent_, "") };
    inline GetPropertiesResponseBodyDataConsoleConfig& setTipContent(string tipContent) { DARABONBA_PTR_SET_VALUE(tipContent_, tipContent) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetPropertiesResponseBodyDataConsoleConfig& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> tipContent_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
