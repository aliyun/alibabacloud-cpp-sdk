// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFORWARDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFORWARDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteForwardEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteForwardEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteForwardEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
    };
    DeleteForwardEntryRequest() = default ;
    DeleteForwardEntryRequest(const DeleteForwardEntryRequest &) = default ;
    DeleteForwardEntryRequest(DeleteForwardEntryRequest &&) = default ;
    DeleteForwardEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteForwardEntryRequest() = default ;
    DeleteForwardEntryRequest& operator=(const DeleteForwardEntryRequest &) = default ;
    DeleteForwardEntryRequest& operator=(DeleteForwardEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardEntryId_ != nullptr; };
    // forwardEntryId Field Functions 
    bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
    void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
    inline string forwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
    inline DeleteForwardEntryRequest& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


  protected:
    // The ID of the DNAT entry that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> forwardEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
