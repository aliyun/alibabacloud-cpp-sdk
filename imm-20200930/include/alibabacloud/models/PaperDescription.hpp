// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAPERDESCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_PAPERDESCRIPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Summary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class PaperDescription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PaperDescription& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(TitleID, titleID_);
    };
    friend void from_json(const Darabonba::Json& j, PaperDescription& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(TitleID, titleID_);
    };
    PaperDescription() = default ;
    PaperDescription(const PaperDescription &) = default ;
    PaperDescription(PaperDescription &&) = default ;
    PaperDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PaperDescription() = default ;
    PaperDescription& operator=(const PaperDescription &) = default ;
    PaperDescription& operator=(PaperDescription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->titleID_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const vector<Summary> & getDescription() const { DARABONBA_PTR_GET_CONST(description_, vector<Summary>) };
    inline vector<Summary> getDescription() { DARABONBA_PTR_GET(description_, vector<Summary>) };
    inline PaperDescription& setDescription(const vector<Summary> & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline PaperDescription& setDescription(vector<Summary> && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // titleID Field Functions 
    bool hasTitleID() const { return this->titleID_ != nullptr;};
    void deleteTitleID() { this->titleID_ = nullptr;};
    inline const vector<string> & getTitleID() const { DARABONBA_PTR_GET_CONST(titleID_, vector<string>) };
    inline vector<string> getTitleID() { DARABONBA_PTR_GET(titleID_, vector<string>) };
    inline PaperDescription& setTitleID(const vector<string> & titleID) { DARABONBA_PTR_SET_VALUE(titleID_, titleID) };
    inline PaperDescription& setTitleID(vector<string> && titleID) { DARABONBA_PTR_SET_RVALUE(titleID_, titleID) };


  protected:
    shared_ptr<vector<Summary>> description_ {};
    shared_ptr<vector<string>> titleID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
