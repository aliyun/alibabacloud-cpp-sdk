// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAISERVICERESPONSEBODYAILIST_HPP_
#define ALIBABACLOUD_MODELS_GETAISERVICERESPONSEBODYAILIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIServiceResponseBodyAIList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIServiceResponseBodyAIList& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIServiceResponseBodyAIList& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAIServiceResponseBodyAIList() = default ;
    GetAIServiceResponseBodyAIList(const GetAIServiceResponseBodyAIList &) = default ;
    GetAIServiceResponseBodyAIList(GetAIServiceResponseBodyAIList &&) = default ;
    GetAIServiceResponseBodyAIList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIServiceResponseBodyAIList() = default ;
    GetAIServiceResponseBodyAIList& operator=(const GetAIServiceResponseBodyAIList &) = default ;
    GetAIServiceResponseBodyAIList& operator=(GetAIServiceResponseBodyAIList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->type_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAIServiceResponseBodyAIList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAIServiceResponseBodyAIList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
