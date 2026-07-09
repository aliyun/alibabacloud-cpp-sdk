// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVALUATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEVALUATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetEvaluatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEvaluatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetEvaluatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetEvaluatorRequest() = default ;
    GetEvaluatorRequest(const GetEvaluatorRequest &) = default ;
    GetEvaluatorRequest(GetEvaluatorRequest &&) = default ;
    GetEvaluatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEvaluatorRequest() = default ;
    GetEvaluatorRequest& operator=(const GetEvaluatorRequest &) = default ;
    GetEvaluatorRequest& operator=(GetEvaluatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetEvaluatorRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The target version number. If not specified, the latest version is used.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
