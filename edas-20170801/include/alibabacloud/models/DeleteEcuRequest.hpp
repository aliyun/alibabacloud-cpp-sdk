// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEECUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEECUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteEcuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEcuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEcuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
    };
    DeleteEcuRequest() = default ;
    DeleteEcuRequest(const DeleteEcuRequest &) = default ;
    DeleteEcuRequest(DeleteEcuRequest &&) = default ;
    DeleteEcuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEcuRequest() = default ;
    DeleteEcuRequest& operator=(const DeleteEcuRequest &) = default ;
    DeleteEcuRequest& operator=(DeleteEcuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecuId_ == nullptr; };
    // ecuId Field Functions 
    bool hasEcuId() const { return this->ecuId_ != nullptr;};
    void deleteEcuId() { this->ecuId_ = nullptr;};
    inline string ecuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
    inline DeleteEcuRequest& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


  protected:
    // The unique ID of the ECU to be deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecuId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
