// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
    };
    GetFunctionInstanceRequest() = default ;
    GetFunctionInstanceRequest(const GetFunctionInstanceRequest &) = default ;
    GetFunctionInstanceRequest(GetFunctionInstanceRequest &&) = default ;
    GetFunctionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionInstanceRequest() = default ;
    GetFunctionInstanceRequest& operator=(const GetFunctionInstanceRequest &) = default ;
    GetFunctionInstanceRequest& operator=(GetFunctionInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline GetFunctionInstanceRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // Specifies the richness of returned information. Valid values:
    // 
    // *   simple: displays only the basic information.
    // *   normal: displays information such as createParameters and cron. This is the default value.
    // *   detail: returns the details of the training task.
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
