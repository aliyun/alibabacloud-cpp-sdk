// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODYDBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDNADBRESPONSEBODYDBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDNADBResponseBodyDBList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDNADBResponseBodyDBList& obj) { 
      DARABONBA_PTR_TO_JSON(DBId, DBId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDNADBResponseBodyDBList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBId, DBId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDNADBResponseBodyDBList() = default ;
    ListDNADBResponseBodyDBList(const ListDNADBResponseBodyDBList &) = default ;
    ListDNADBResponseBodyDBList(ListDNADBResponseBodyDBList &&) = default ;
    ListDNADBResponseBodyDBList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDNADBResponseBodyDBList() = default ;
    ListDNADBResponseBodyDBList& operator=(const ListDNADBResponseBodyDBList &) = default ;
    ListDNADBResponseBodyDBList& operator=(ListDNADBResponseBodyDBList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBId_ == nullptr
        && return this->description_ == nullptr && return this->model_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr; };
    // DBId Field Functions 
    bool hasDBId() const { return this->DBId_ != nullptr;};
    void deleteDBId() { this->DBId_ = nullptr;};
    inline string DBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
    inline ListDNADBResponseBodyDBList& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDNADBResponseBodyDBList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListDNADBResponseBodyDBList& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDNADBResponseBodyDBList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDNADBResponseBodyDBList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the media fingerprint library.
    std::shared_ptr<string> DBId_ = nullptr;
    // The description of the media fingerprint library.
    std::shared_ptr<string> description_ = nullptr;
    // The model of the media fingerprint library. Valid values:
    // 
    // *   **Video**
    // *   **Audio**
    // *   **Image**
    // *   **Text** (supported only in the China (Shanghai) region)
    std::shared_ptr<string> model_ = nullptr;
    // The name of the media fingerprint library.
    std::shared_ptr<string> name_ = nullptr;
    // The state of the media fingerprint library. Default value: **offline**. ****Valid values:
    // 
    // *   **offline**: The media fingerprint library is offline.
    // *   **active**: The media fingerprint library is online.
    // *   **deleted**: The media fingerprint library is deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
