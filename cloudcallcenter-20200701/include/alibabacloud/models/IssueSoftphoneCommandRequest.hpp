// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISSUESOFTPHONECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISSUESOFTPHONECOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class IssueSoftphoneCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IssueSoftphoneCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, IssueSoftphoneCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    IssueSoftphoneCommandRequest() = default ;
    IssueSoftphoneCommandRequest(const IssueSoftphoneCommandRequest &) = default ;
    IssueSoftphoneCommandRequest(IssueSoftphoneCommandRequest &&) = default ;
    IssueSoftphoneCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IssueSoftphoneCommandRequest() = default ;
    IssueSoftphoneCommandRequest& operator=(const IssueSoftphoneCommandRequest &) = default ;
    IssueSoftphoneCommandRequest& operator=(IssueSoftphoneCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline IssueSoftphoneCommandRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // This parameter is required.
    shared_ptr<string> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
