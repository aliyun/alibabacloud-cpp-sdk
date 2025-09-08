// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATATEXTINIMAGECUSTOMTEXTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODYDATATEXTINIMAGECUSTOMTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeImageResultExtResponseBodyDataTextInImageCustomTexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageResultExtResponseBodyDataTextInImageCustomTexts& obj) { 
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageResultExtResponseBodyDataTextInImageCustomTexts& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
    };
    DescribeImageResultExtResponseBodyDataTextInImageCustomTexts() = default ;
    DescribeImageResultExtResponseBodyDataTextInImageCustomTexts(const DescribeImageResultExtResponseBodyDataTextInImageCustomTexts &) = default ;
    DescribeImageResultExtResponseBodyDataTextInImageCustomTexts(DescribeImageResultExtResponseBodyDataTextInImageCustomTexts &&) = default ;
    DescribeImageResultExtResponseBodyDataTextInImageCustomTexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageResultExtResponseBodyDataTextInImageCustomTexts() = default ;
    DescribeImageResultExtResponseBodyDataTextInImageCustomTexts& operator=(const DescribeImageResultExtResponseBodyDataTextInImageCustomTexts &) = default ;
    DescribeImageResultExtResponseBodyDataTextInImageCustomTexts& operator=(DescribeImageResultExtResponseBodyDataTextInImageCustomTexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyWords_ != nullptr
        && this->libId_ != nullptr && this->libName_ != nullptr; };
    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline string keyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
    inline DescribeImageResultExtResponseBodyDataTextInImageCustomTexts& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline DescribeImageResultExtResponseBodyDataTextInImageCustomTexts& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline DescribeImageResultExtResponseBodyDataTextInImageCustomTexts& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


  protected:
    // Custom words, multiple words separated by commas.
    std::shared_ptr<string> keyWords_ = nullptr;
    // Custom library ID.
    std::shared_ptr<string> libId_ = nullptr;
    // Custom library name.
    std::shared_ptr<string> libName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
