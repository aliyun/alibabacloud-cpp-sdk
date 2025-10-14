// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUESTTICKETMEMOATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_ADDTICKETMEMOREQUESTTICKETMEMOATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddTicketMemoRequestTicketMemoAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTicketMemoRequestTicketMemoAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, AddTicketMemoRequestTicketMemoAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    AddTicketMemoRequestTicketMemoAttachments() = default ;
    AddTicketMemoRequestTicketMemoAttachments(const AddTicketMemoRequestTicketMemoAttachments &) = default ;
    AddTicketMemoRequestTicketMemoAttachments(AddTicketMemoRequestTicketMemoAttachments &&) = default ;
    AddTicketMemoRequestTicketMemoAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTicketMemoRequestTicketMemoAttachments() = default ;
    AddTicketMemoRequestTicketMemoAttachments& operator=(const AddTicketMemoRequestTicketMemoAttachments &) = default ;
    AddTicketMemoRequestTicketMemoAttachments& operator=(AddTicketMemoRequestTicketMemoAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->key_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline AddTicketMemoRequestTicketMemoAttachments& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline AddTicketMemoRequestTicketMemoAttachments& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
