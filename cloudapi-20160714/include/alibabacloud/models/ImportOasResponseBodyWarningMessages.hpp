// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYWARNINGMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYWARNINGMESSAGES_HPP_
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
  class ImportOASResponseBodyWarningMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodyWarningMessages& obj) { 
      DARABONBA_PTR_TO_JSON(WarningMessage, warningMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodyWarningMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(WarningMessage, warningMessage_);
    };
    ImportOASResponseBodyWarningMessages() = default ;
    ImportOASResponseBodyWarningMessages(const ImportOASResponseBodyWarningMessages &) = default ;
    ImportOASResponseBodyWarningMessages(ImportOASResponseBodyWarningMessages &&) = default ;
    ImportOASResponseBodyWarningMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodyWarningMessages() = default ;
    ImportOASResponseBodyWarningMessages& operator=(const ImportOASResponseBodyWarningMessages &) = default ;
    ImportOASResponseBodyWarningMessages& operator=(ImportOASResponseBodyWarningMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->warningMessage_ == nullptr; };
    // warningMessage Field Functions 
    bool hasWarningMessage() const { return this->warningMessage_ != nullptr;};
    void deleteWarningMessage() { this->warningMessage_ = nullptr;};
    inline const vector<string> & warningMessage() const { DARABONBA_PTR_GET_CONST(warningMessage_, vector<string>) };
    inline vector<string> warningMessage() { DARABONBA_PTR_GET(warningMessage_, vector<string>) };
    inline ImportOASResponseBodyWarningMessages& setWarningMessage(const vector<string> & warningMessage) { DARABONBA_PTR_SET_VALUE(warningMessage_, warningMessage) };
    inline ImportOASResponseBodyWarningMessages& setWarningMessage(vector<string> && warningMessage) { DARABONBA_PTR_SET_RVALUE(warningMessage_, warningMessage) };


  protected:
    std::shared_ptr<vector<string>> warningMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
