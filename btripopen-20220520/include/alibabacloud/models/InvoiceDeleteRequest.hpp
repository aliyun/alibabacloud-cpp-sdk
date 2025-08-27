// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICEDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOICEDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    InvoiceDeleteRequest() = default ;
    InvoiceDeleteRequest(const InvoiceDeleteRequest &) = default ;
    InvoiceDeleteRequest(InvoiceDeleteRequest &&) = default ;
    InvoiceDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceDeleteRequest() = default ;
    InvoiceDeleteRequest& operator=(const InvoiceDeleteRequest &) = default ;
    InvoiceDeleteRequest& operator=(InvoiceDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->thirdPartId_ != nullptr; };
    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline InvoiceDeleteRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
