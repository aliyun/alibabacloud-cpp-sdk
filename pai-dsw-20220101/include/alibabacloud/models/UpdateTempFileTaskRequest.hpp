// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPFILETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPFILETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateTempFileTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTempFileTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GmtExpiredTime, gmtExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTempFileTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtExpiredTime, gmtExpiredTime_);
    };
    UpdateTempFileTaskRequest() = default ;
    UpdateTempFileTaskRequest(const UpdateTempFileTaskRequest &) = default ;
    UpdateTempFileTaskRequest(UpdateTempFileTaskRequest &&) = default ;
    UpdateTempFileTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTempFileTaskRequest() = default ;
    UpdateTempFileTaskRequest& operator=(const UpdateTempFileTaskRequest &) = default ;
    UpdateTempFileTaskRequest& operator=(UpdateTempFileTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtExpiredTime_ == nullptr; };
    // gmtExpiredTime Field Functions 
    bool hasGmtExpiredTime() const { return this->gmtExpiredTime_ != nullptr;};
    void deleteGmtExpiredTime() { this->gmtExpiredTime_ = nullptr;};
    inline string getGmtExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(gmtExpiredTime_, "") };
    inline UpdateTempFileTaskRequest& setGmtExpiredTime(string gmtExpiredTime) { DARABONBA_PTR_SET_VALUE(gmtExpiredTime_, gmtExpiredTime) };


  protected:
    shared_ptr<string> gmtExpiredTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
