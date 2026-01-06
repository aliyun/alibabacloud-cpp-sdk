// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertDropDownListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDropDownListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_TO_JSON(SheetId, sheetId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WorkbookId, workbookId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDropDownListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(RangeAddress, rangeAddress_);
      DARABONBA_PTR_FROM_JSON(SheetId, sheetId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WorkbookId, workbookId_);
    };
    InsertDropDownListRequest() = default ;
    InsertDropDownListRequest(const InsertDropDownListRequest &) = default ;
    InsertDropDownListRequest(InsertDropDownListRequest &&) = default ;
    InsertDropDownListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDropDownListRequest() = default ;
    InsertDropDownListRequest& operator=(const InsertDropDownListRequest &) = default ;
    InsertDropDownListRequest& operator=(InsertDropDownListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class Options : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Options& obj) { 
        DARABONBA_PTR_TO_JSON(Color, color_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Options& obj) { 
        DARABONBA_PTR_FROM_JSON(Color, color_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Options() = default ;
      Options(const Options &) = default ;
      Options(Options &&) = default ;
      Options(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Options() = default ;
      Options& operator=(const Options &) = default ;
      Options& operator=(Options &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->color_ == nullptr
        && this->value_ == nullptr; };
      // color Field Functions 
      bool hasColor() const { return this->color_ != nullptr;};
      void deleteColor() { this->color_ = nullptr;};
      inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
      inline Options& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Options& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // This parameter is required.
      shared_ptr<string> color_ {};
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->options_ == nullptr
        && this->rangeAddress_ == nullptr && this->sheetId_ == nullptr && this->tenantContext_ == nullptr && this->workbookId_ == nullptr; };
    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<InsertDropDownListRequest::Options> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<InsertDropDownListRequest::Options>) };
    inline vector<InsertDropDownListRequest::Options> getOptions() { DARABONBA_PTR_GET(options_, vector<InsertDropDownListRequest::Options>) };
    inline InsertDropDownListRequest& setOptions(const vector<InsertDropDownListRequest::Options> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline InsertDropDownListRequest& setOptions(vector<InsertDropDownListRequest::Options> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // rangeAddress Field Functions 
    bool hasRangeAddress() const { return this->rangeAddress_ != nullptr;};
    void deleteRangeAddress() { this->rangeAddress_ = nullptr;};
    inline string getRangeAddress() const { DARABONBA_PTR_GET_DEFAULT(rangeAddress_, "") };
    inline InsertDropDownListRequest& setRangeAddress(string rangeAddress) { DARABONBA_PTR_SET_VALUE(rangeAddress_, rangeAddress) };


    // sheetId Field Functions 
    bool hasSheetId() const { return this->sheetId_ != nullptr;};
    void deleteSheetId() { this->sheetId_ = nullptr;};
    inline string getSheetId() const { DARABONBA_PTR_GET_DEFAULT(sheetId_, "") };
    inline InsertDropDownListRequest& setSheetId(string sheetId) { DARABONBA_PTR_SET_VALUE(sheetId_, sheetId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InsertDropDownListRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InsertDropDownListRequest::TenantContext) };
    inline InsertDropDownListRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, InsertDropDownListRequest::TenantContext) };
    inline InsertDropDownListRequest& setTenantContext(const InsertDropDownListRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InsertDropDownListRequest& setTenantContext(InsertDropDownListRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // workbookId Field Functions 
    bool hasWorkbookId() const { return this->workbookId_ != nullptr;};
    void deleteWorkbookId() { this->workbookId_ = nullptr;};
    inline string getWorkbookId() const { DARABONBA_PTR_GET_DEFAULT(workbookId_, "") };
    inline InsertDropDownListRequest& setWorkbookId(string workbookId) { DARABONBA_PTR_SET_VALUE(workbookId_, workbookId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<InsertDropDownListRequest::Options>> options_ {};
    // This parameter is required.
    shared_ptr<string> rangeAddress_ {};
    // This parameter is required.
    shared_ptr<string> sheetId_ {};
    shared_ptr<InsertDropDownListRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> workbookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
