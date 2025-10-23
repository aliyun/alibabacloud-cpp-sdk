// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHITEMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHITEMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushItemDataRequestItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class PushItemDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushItemDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, PushItemDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    PushItemDataRequest() = default ;
    PushItemDataRequest(const PushItemDataRequest &) = default ;
    PushItemDataRequest(PushItemDataRequest &&) = default ;
    PushItemDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushItemDataRequest() = default ;
    PushItemDataRequest& operator=(const PushItemDataRequest &) = default ;
    PushItemDataRequest& operator=(PushItemDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->items_ == nullptr && return this->year_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PushItemDataRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const PushItemDataRequestItems & items() const { DARABONBA_PTR_GET_CONST(items_, PushItemDataRequestItems) };
    inline PushItemDataRequestItems items() { DARABONBA_PTR_GET(items_, PushItemDataRequestItems) };
    inline PushItemDataRequest& setItems(const PushItemDataRequestItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline PushItemDataRequest& setItems(PushItemDataRequestItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline string year() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
    inline PushItemDataRequest& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // List of data to be pushed.
    // 
    // This parameter is required.
    std::shared_ptr<PushItemDataRequestItems> items_ = nullptr;
    // The year of the data created.
    // 
    // This parameter is required.
    std::shared_ptr<string> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
