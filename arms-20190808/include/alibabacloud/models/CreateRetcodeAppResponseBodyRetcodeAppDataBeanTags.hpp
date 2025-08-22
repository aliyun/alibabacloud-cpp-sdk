// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODYRETCODEAPPDATABEANTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODYRETCODEAPPDATABEANTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags() = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags(const CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags &) = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags(CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags &&) = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags() = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags& operator=(const CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags &) = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags& operator=(CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tags_ != nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags>) };
    inline vector<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags>) };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags& setTags(const vector<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags& setTags(vector<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTagsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
