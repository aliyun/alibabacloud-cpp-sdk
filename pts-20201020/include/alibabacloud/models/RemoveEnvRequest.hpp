// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEENVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEENVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class RemoveEnvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveEnvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvId, envId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveEnvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvId, envId_);
    };
    RemoveEnvRequest() = default ;
    RemoveEnvRequest(const RemoveEnvRequest &) = default ;
    RemoveEnvRequest(RemoveEnvRequest &&) = default ;
    RemoveEnvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveEnvRequest() = default ;
    RemoveEnvRequest& operator=(const RemoveEnvRequest &) = default ;
    RemoveEnvRequest& operator=(RemoveEnvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envId_ == nullptr; };
    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline RemoveEnvRequest& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


  protected:
    // The ID of the environment that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> envId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
