// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODYDATARESULTTAGS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONINSTANCELISTRESPONSEBODYDATARESULTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetApplicationInstanceListResponseBodyDataResultTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationInstanceListResponseBodyDataResultTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationInstanceListResponseBodyDataResultTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetApplicationInstanceListResponseBodyDataResultTags() = default ;
    GetApplicationInstanceListResponseBodyDataResultTags(const GetApplicationInstanceListResponseBodyDataResultTags &) = default ;
    GetApplicationInstanceListResponseBodyDataResultTags(GetApplicationInstanceListResponseBodyDataResultTags &&) = default ;
    GetApplicationInstanceListResponseBodyDataResultTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationInstanceListResponseBodyDataResultTags() = default ;
    GetApplicationInstanceListResponseBodyDataResultTags& operator=(const GetApplicationInstanceListResponseBodyDataResultTags &) = default ;
    GetApplicationInstanceListResponseBodyDataResultTags& operator=(GetApplicationInstanceListResponseBodyDataResultTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetApplicationInstanceListResponseBodyDataResultTags& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // 标签值。
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
