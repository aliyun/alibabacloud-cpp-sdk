// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEMODELFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEMODELFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class ValidateModelFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateModelFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateModelFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
    };
    ValidateModelFileRequest() = default ;
    ValidateModelFileRequest(const ValidateModelFileRequest &) = default ;
    ValidateModelFileRequest(ValidateModelFileRequest &&) = default ;
    ValidateModelFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateModelFileRequest() = default ;
    ValidateModelFileRequest& operator=(const ValidateModelFileRequest &) = default ;
    ValidateModelFileRequest& operator=(ValidateModelFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePath_ == nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ValidateModelFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


  protected:
    // File path.
    shared_ptr<string> filePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
