// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUMAPPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATERUMAPPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRumAppResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRumAppResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRumAppResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnDomain, cdnDomain_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
    };
    CreateRumAppResponseBodyData() = default ;
    CreateRumAppResponseBodyData(const CreateRumAppResponseBodyData &) = default ;
    CreateRumAppResponseBodyData(CreateRumAppResponseBodyData &&) = default ;
    CreateRumAppResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRumAppResponseBodyData() = default ;
    CreateRumAppResponseBodyData& operator=(const CreateRumAppResponseBodyData &) = default ;
    CreateRumAppResponseBodyData& operator=(CreateRumAppResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdnDomain_ != nullptr
        && this->endpoint_ != nullptr && this->pid_ != nullptr; };
    // cdnDomain Field Functions 
    bool hasCdnDomain() const { return this->cdnDomain_ != nullptr;};
    void deleteCdnDomain() { this->cdnDomain_ = nullptr;};
    inline string cdnDomain() const { DARABONBA_PTR_GET_DEFAULT(cdnDomain_, "") };
    inline CreateRumAppResponseBodyData& setCdnDomain(string cdnDomain) { DARABONBA_PTR_SET_VALUE(cdnDomain_, cdnDomain) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateRumAppResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline CreateRumAppResponseBodyData& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


  protected:
    // The domain name of the SDK.
    std::shared_ptr<string> cdnDomain_ = nullptr;
    // The endpoint that is used to report application data.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The process ID (PID) of the application.
    std::shared_ptr<string> pid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
