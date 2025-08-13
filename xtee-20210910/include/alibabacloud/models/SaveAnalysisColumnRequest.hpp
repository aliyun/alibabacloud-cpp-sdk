// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANALYSISCOLUMNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANALYSISCOLUMNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class SaveAnalysisColumnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnalysisColumnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnalysisColumnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    SaveAnalysisColumnRequest() = default ;
    SaveAnalysisColumnRequest(const SaveAnalysisColumnRequest &) = default ;
    SaveAnalysisColumnRequest(SaveAnalysisColumnRequest &&) = default ;
    SaveAnalysisColumnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnalysisColumnRequest() = default ;
    SaveAnalysisColumnRequest& operator=(const SaveAnalysisColumnRequest &) = default ;
    SaveAnalysisColumnRequest& operator=(SaveAnalysisColumnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->columns_ != nullptr && this->regId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveAnalysisColumnRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline string columns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
    inline SaveAnalysisColumnRequest& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline SaveAnalysisColumnRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Custom columns
    // 
    // This parameter is required.
    std::shared_ptr<string> columns_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
