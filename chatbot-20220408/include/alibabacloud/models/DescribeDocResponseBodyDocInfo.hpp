// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDocResponseBodyDocInfoDocParas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeDocResponseBodyDocInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocResponseBodyDocInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DocParas, docParas_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocResponseBodyDocInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DocParas, docParas_);
    };
    DescribeDocResponseBodyDocInfo() = default ;
    DescribeDocResponseBodyDocInfo(const DescribeDocResponseBodyDocInfo &) = default ;
    DescribeDocResponseBodyDocInfo(DescribeDocResponseBodyDocInfo &&) = default ;
    DescribeDocResponseBodyDocInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocResponseBodyDocInfo() = default ;
    DescribeDocResponseBodyDocInfo& operator=(const DescribeDocResponseBodyDocInfo &) = default ;
    DescribeDocResponseBodyDocInfo& operator=(DescribeDocResponseBodyDocInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docParas_ == nullptr; };
    // docParas Field Functions 
    bool hasDocParas() const { return this->docParas_ != nullptr;};
    void deleteDocParas() { this->docParas_ = nullptr;};
    inline const vector<Models::DescribeDocResponseBodyDocInfoDocParas> & docParas() const { DARABONBA_PTR_GET_CONST(docParas_, vector<Models::DescribeDocResponseBodyDocInfoDocParas>) };
    inline vector<Models::DescribeDocResponseBodyDocInfoDocParas> docParas() { DARABONBA_PTR_GET(docParas_, vector<Models::DescribeDocResponseBodyDocInfoDocParas>) };
    inline DescribeDocResponseBodyDocInfo& setDocParas(const vector<Models::DescribeDocResponseBodyDocInfoDocParas> & docParas) { DARABONBA_PTR_SET_VALUE(docParas_, docParas) };
    inline DescribeDocResponseBodyDocInfo& setDocParas(vector<Models::DescribeDocResponseBodyDocInfoDocParas> && docParas) { DARABONBA_PTR_SET_RVALUE(docParas_, docParas) };


  protected:
    std::shared_ptr<vector<Models::DescribeDocResponseBodyDocInfoDocParas>> docParas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
