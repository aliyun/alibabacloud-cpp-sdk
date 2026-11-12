// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEVERSIONREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEVERSIONREMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceVersionRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceVersionRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceVersionRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    UpdateServiceVersionRemarkRequest() = default ;
    UpdateServiceVersionRemarkRequest(const UpdateServiceVersionRemarkRequest &) = default ;
    UpdateServiceVersionRemarkRequest(UpdateServiceVersionRemarkRequest &&) = default ;
    UpdateServiceVersionRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceVersionRemarkRequest() = default ;
    UpdateServiceVersionRemarkRequest& operator=(const UpdateServiceVersionRemarkRequest &) = default ;
    UpdateServiceVersionRemarkRequest& operator=(UpdateServiceVersionRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remark_ == nullptr; };
    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateServiceVersionRemarkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The remarks.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
