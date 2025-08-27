// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINVOICEENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINVOICEENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteInvoiceEntityRequestEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DeleteInvoiceEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(del_all, delAll_);
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(del_all, delAll_);
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    DeleteInvoiceEntityRequest() = default ;
    DeleteInvoiceEntityRequest(const DeleteInvoiceEntityRequest &) = default ;
    DeleteInvoiceEntityRequest(DeleteInvoiceEntityRequest &&) = default ;
    DeleteInvoiceEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInvoiceEntityRequest() = default ;
    DeleteInvoiceEntityRequest& operator=(const DeleteInvoiceEntityRequest &) = default ;
    DeleteInvoiceEntityRequest& operator=(DeleteInvoiceEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delAll_ != nullptr
        && this->entities_ != nullptr && this->thirdPartId_ != nullptr; };
    // delAll Field Functions 
    bool hasDelAll() const { return this->delAll_ != nullptr;};
    void deleteDelAll() { this->delAll_ = nullptr;};
    inline bool delAll() const { DARABONBA_PTR_GET_DEFAULT(delAll_, false) };
    inline DeleteInvoiceEntityRequest& setDelAll(bool delAll) { DARABONBA_PTR_SET_VALUE(delAll_, delAll) };


    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<DeleteInvoiceEntityRequestEntities> & entities() const { DARABONBA_PTR_GET_CONST(entities_, vector<DeleteInvoiceEntityRequestEntities>) };
    inline vector<DeleteInvoiceEntityRequestEntities> entities() { DARABONBA_PTR_GET(entities_, vector<DeleteInvoiceEntityRequestEntities>) };
    inline DeleteInvoiceEntityRequest& setEntities(const vector<DeleteInvoiceEntityRequestEntities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline DeleteInvoiceEntityRequest& setEntities(vector<DeleteInvoiceEntityRequestEntities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string thirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline DeleteInvoiceEntityRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    std::shared_ptr<bool> delAll_ = nullptr;
    std::shared_ptr<vector<DeleteInvoiceEntityRequestEntities>> entities_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdPartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
