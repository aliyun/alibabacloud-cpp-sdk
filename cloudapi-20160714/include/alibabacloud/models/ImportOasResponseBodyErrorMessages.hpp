// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYERRORMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYERRORMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBodyErrorMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodyErrorMessages& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodyErrorMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
    };
    ImportOASResponseBodyErrorMessages() = default ;
    ImportOASResponseBodyErrorMessages(const ImportOASResponseBodyErrorMessages &) = default ;
    ImportOASResponseBodyErrorMessages(ImportOASResponseBodyErrorMessages &&) = default ;
    ImportOASResponseBodyErrorMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodyErrorMessages() = default ;
    ImportOASResponseBodyErrorMessages& operator=(const ImportOASResponseBodyErrorMessages &) = default ;
    ImportOASResponseBodyErrorMessages& operator=(ImportOASResponseBodyErrorMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline const vector<string> & errorMessage() const { DARABONBA_PTR_GET_CONST(errorMessage_, vector<string>) };
    inline vector<string> errorMessage() { DARABONBA_PTR_GET(errorMessage_, vector<string>) };
    inline ImportOASResponseBodyErrorMessages& setErrorMessage(const vector<string> & errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };
    inline ImportOASResponseBodyErrorMessages& setErrorMessage(vector<string> && errorMessage) { DARABONBA_PTR_SET_RVALUE(errorMessage_, errorMessage) };


  protected:
    std::shared_ptr<vector<string>> errorMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
