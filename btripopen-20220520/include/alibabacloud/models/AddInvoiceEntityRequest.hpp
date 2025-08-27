// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINVOICEENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINVOICEENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddInvoiceEntityRequestEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddInvoiceEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, AddInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    AddInvoiceEntityRequest() = default ;
    AddInvoiceEntityRequest(const AddInvoiceEntityRequest &) = default ;
    AddInvoiceEntityRequest(AddInvoiceEntityRequest &&) = default ;
    AddInvoiceEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInvoiceEntityRequest() = default ;
    AddInvoiceEntityRequest& operator=(const AddInvoiceEntityRequest &) = default ;
    AddInvoiceEntityRequest& operator=(AddInvoiceEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entities_ != nullptr
        && this->thirdPartId_ != nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<AddInvoiceEntityRequestEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<AddInvoiceEntityRequestEntities>) };
    inline vector<AddInvoiceEntityRequestEntities> entities() { DARABONBA_PTR_GET(entities_, vector<AddInvoiceEntityRequestEntities>) };
    inline AddInvoiceEntityRequest& setEntities(const vector<AddInvoiceEntityRequestEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline AddInvoiceEntityRequest& setEntities(vector<AddInvoiceEntityRequestEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline AddInvoiceEntityRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<AddInvoiceEntityRequestEntities>> entities_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
