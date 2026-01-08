// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(detailed, detailed_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(detailed, detailed_);
    };
    GetAppRequest() = default ;
    GetAppRequest(const GetAppRequest &) = default ;
    GetAppRequest(GetAppRequest &&) = default ;
    GetAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppRequest() = default ;
    GetAppRequest& operator=(const GetAppRequest &) = default ;
    GetAppRequest& operator=(GetAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailed_ == nullptr; };
    // detailed Field Functions 
    bool hasDetailed() const { return this->detailed_ != nullptr;};
    void deleteDetailed() { this->detailed_ = nullptr;};
    inline bool getDetailed() const { DARABONBA_PTR_GET_DEFAULT(detailed_, false) };
    inline GetAppRequest& setDetailed(bool detailed) { DARABONBA_PTR_SET_VALUE(detailed_, detailed) };


  protected:
    shared_ptr<bool> detailed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
