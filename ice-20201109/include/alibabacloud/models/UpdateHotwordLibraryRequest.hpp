// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTWORDLIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTWORDLIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Hotword.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateHotwordLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotwordLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_TO_JSON(Hotwords, hotwords_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotwordLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HotwordLibraryId, hotwordLibraryId_);
      DARABONBA_PTR_FROM_JSON(Hotwords, hotwords_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateHotwordLibraryRequest() = default ;
    UpdateHotwordLibraryRequest(const UpdateHotwordLibraryRequest &) = default ;
    UpdateHotwordLibraryRequest(UpdateHotwordLibraryRequest &&) = default ;
    UpdateHotwordLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotwordLibraryRequest() = default ;
    UpdateHotwordLibraryRequest& operator=(const UpdateHotwordLibraryRequest &) = default ;
    UpdateHotwordLibraryRequest& operator=(UpdateHotwordLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->hotwordLibraryId_ != nullptr && this->hotwords_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateHotwordLibraryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotwordLibraryId Field Functions 
    bool hasHotwordLibraryId() const { return this->hotwordLibraryId_ != nullptr;};
    void deleteHotwordLibraryId() { this->hotwordLibraryId_ = nullptr;};
    inline string hotwordLibraryId() const { DARABONBA_PTR_GET_DEFAULT(hotwordLibraryId_, "") };
    inline UpdateHotwordLibraryRequest& setHotwordLibraryId(string hotwordLibraryId) { DARABONBA_PTR_SET_VALUE(hotwordLibraryId_, hotwordLibraryId) };


    // hotwords Field Functions 
    bool hasHotwords() const { return this->hotwords_ != nullptr;};
    void deleteHotwords() { this->hotwords_ = nullptr;};
    inline const vector<Hotword> & hotwords() const { DARABONBA_PTR_GET_CONST(hotwords_, vector<Hotword>) };
    inline vector<Hotword> hotwords() { DARABONBA_PTR_GET(hotwords_, vector<Hotword>) };
    inline UpdateHotwordLibraryRequest& setHotwords(const vector<Hotword> & hotwords) { DARABONBA_PTR_SET_VALUE(hotwords_, hotwords) };
    inline UpdateHotwordLibraryRequest& setHotwords(vector<Hotword> && hotwords) { DARABONBA_PTR_SET_RVALUE(hotwords_, hotwords) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateHotwordLibraryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> hotwordLibraryId_ = nullptr;
    std::shared_ptr<vector<Hotword>> hotwords_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
