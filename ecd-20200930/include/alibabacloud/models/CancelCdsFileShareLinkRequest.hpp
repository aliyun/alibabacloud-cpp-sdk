// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCDSFILESHARELINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELCDSFILESHARELINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CancelCdsFileShareLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelCdsFileShareLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(ShareId, shareId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelCdsFileShareLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(ShareId, shareId_);
    };
    CancelCdsFileShareLinkRequest() = default ;
    CancelCdsFileShareLinkRequest(const CancelCdsFileShareLinkRequest &) = default ;
    CancelCdsFileShareLinkRequest(CancelCdsFileShareLinkRequest &&) = default ;
    CancelCdsFileShareLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelCdsFileShareLinkRequest() = default ;
    CancelCdsFileShareLinkRequest& operator=(const CancelCdsFileShareLinkRequest &) = default ;
    CancelCdsFileShareLinkRequest& operator=(CancelCdsFileShareLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->shareId_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CancelCdsFileShareLinkRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string shareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline CancelCdsFileShareLinkRequest& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


  protected:
    // The ID of the cloud disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The ID of the file sharing task.
    // 
    // This parameter is required.
    std::shared_ptr<string> shareId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
