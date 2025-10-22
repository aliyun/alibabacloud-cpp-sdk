// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTEDDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SELECTEDDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class SelectedDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectedDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListDate, listDate_);
    };
    friend void from_json(const Darabonba::Json& j, SelectedDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListDate, listDate_);
    };
    SelectedDomainListRequest() = default ;
    SelectedDomainListRequest(const SelectedDomainListRequest &) = default ;
    SelectedDomainListRequest(SelectedDomainListRequest &&) = default ;
    SelectedDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectedDomainListRequest() = default ;
    SelectedDomainListRequest& operator=(const SelectedDomainListRequest &) = default ;
    SelectedDomainListRequest& operator=(SelectedDomainListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listDate_ == nullptr; };
    // listDate Field Functions 
    bool hasListDate() const { return this->listDate_ != nullptr;};
    void deleteListDate() { this->listDate_ = nullptr;};
    inline string listDate() const { DARABONBA_PTR_GET_DEFAULT(listDate_, "") };
    inline SelectedDomainListRequest& setListDate(string listDate) { DARABONBA_PTR_SET_VALUE(listDate_, listDate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> listDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
