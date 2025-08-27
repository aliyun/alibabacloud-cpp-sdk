// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICESEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INVOICESEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    InvoiceSearchResponseBodyModule() = default ;
    InvoiceSearchResponseBodyModule(const InvoiceSearchResponseBodyModule &) = default ;
    InvoiceSearchResponseBodyModule(InvoiceSearchResponseBodyModule &&) = default ;
    InvoiceSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceSearchResponseBodyModule() = default ;
    InvoiceSearchResponseBodyModule& operator=(const InvoiceSearchResponseBodyModule &) = default ;
    InvoiceSearchResponseBodyModule& operator=(InvoiceSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->thirdPartInvoiceId_ != nullptr && this->title_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline InvoiceSearchResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // thirdPartInvoiceId Field Functions 
    bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
    void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
    inline string thirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
    inline InvoiceSearchResponseBodyModule& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline InvoiceSearchResponseBodyModule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // ID
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> thirdPartInvoiceId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
