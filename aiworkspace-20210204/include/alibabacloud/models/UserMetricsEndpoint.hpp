// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERMETRICSENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_USERMETRICSENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UserMetricsEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserMetricsEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, UserMetricsEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    UserMetricsEndpoint() = default ;
    UserMetricsEndpoint(const UserMetricsEndpoint &) = default ;
    UserMetricsEndpoint(UserMetricsEndpoint &&) = default ;
    UserMetricsEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserMetricsEndpoint() = default ;
    UserMetricsEndpoint& operator=(const UserMetricsEndpoint &) = default ;
    UserMetricsEndpoint& operator=(UserMetricsEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr
        && this->port_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UserMetricsEndpoint& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UserMetricsEndpoint& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    shared_ptr<string> path_ {};
    shared_ptr<int32_t> port_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
